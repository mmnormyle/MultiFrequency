		.sect ".fir"
		;A label pointing to RAM where the output/sample assmebly routine is copied
		;This avoids the processor having to enter 'wait states' for flash memory
		;TODO: make this more robust. The memory section is not protected.
fir:
		nop


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

		.text

;Inputs expected:	r0 void* output_data
;				 	r1 void* dac_table
;					r2 pointer to function in ram
;					r3 int sample points

		.global output_and_sample

output_and_sample:
		.label fir_src
		push {r0-r12}

		mov r2, #2			;LOOPS_BETWEEN calculation

		mov r11, r0

		lsl r3, r3, #1
		add r3, r3, r0

        ldr r4, dport
        ldr r5, actl
        ldr r12, amem
        ldr r6, [r5]
       	orr r6, r6, #1

       	mov r7, #0
       	mov r8, #0

		mov r10, #0

       	;r0 is output data table pointer
        ;r1 is dac table pointer
        ;r2 is LOOPS_BETWEEN calculation + 1
        ;r3 is desired sample points * 2
        ;r4 is P4OUT register
        ;r5 contains ADC14CTL pointer
        ;r6 contains trigger sampling ADC14CTL bit
        ;r7 contains dac_table index
        ;r8 contains data_table index
        ;r9 contains temporary values
		;r10 contains loop counter
		;r11 is size of DAC table (same as number of sample points)
		;r12 contains ADC14MEM0

update_dac:
		;move value in P4OUT for DAC
		ldrb r9, [r1], #1
   		strb r9, [r4] ;3 cycles due to pipelining

trigger_check:
		adds r10, r10, #0 ;if r10 is zero, we're supposed to trigger an ADC sample on this iteration
		beq trigger_sample
no_trigger_sample:
		nop
		nop
		b memory_check
trigger_sample:
		strb r6, [r5]	;sets ADC14CTL[0] to 1 enabling conversion
		mov r10, r2	;sets r10 equal to the number of iterations between a sample trigger and a memory grab

memory_check:
		adds r10, r10, #-1
		beq memory_grab
no_memory_grab:
		nop
		nop
		b check_done
memory_grab:
		ldrh r9, [r12] ;load ADCMEM14 into r9
		strh r9, [r0], #2 ;strh and ldrh only takes 3 cycles due to pipeline

check_done:
		cmp r0, r3
		brne update_dac

cleanup:
		pop {r0-r12}
		mov pc, lr

amem	.word 0x40012098 ;ADC14MEM0
actl	.word 0x40012000 ;ADC14CTL
dport	.word 0x40004C23 ;p4out register

		.label fir_end

;---------------------------------------------------------------------------
;	sampleLoop: mov PC to value specified by RAM pointer and execute the function
;---------------------------------------------------------------------------

		.global sampleLoop
sampleLoop:
		mov pc, r2


;---------------------------------------------------------------------------
;	copy_to_ram: copy sample loop code from flash to ram
;---------------------------------------------------------------------------

		.global copy_to_ram

copy_to_ram:
		push {r4,r5,r7}
		ldr r4, fir_s
		ldr r5, fir_e
		ldr r7, fir_a
		sub r4, r4, #1 ;TODO: why?
		sub r7, r7, #1 ;TODO: why?
		mov r0, r7
$1:		cmp r4, r5
		bcs theend
		ldrh r6, [r4], #2 ;copy fir routine to its run address
		strh r6, [r7], #2
		b $1

;---------------------------------------------------------------------------
;	jump to fir routine, now in flash
;---------------------------------------------------------------------------
theend:
		pop {r4,r5,r7}
		mov pc, lr
fir_a 	.word fir
fir_s 	.word fir_src
fir_e 	.word fir_end