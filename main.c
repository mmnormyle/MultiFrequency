#include "driverlib.h"
#include "constants.h"
#include "system.h"
#include "dsp.h"
#include "rf.h"

/*
 * Assembly functions
 */
typedef void ( *sample_function_ptr_t ) (uint16_t*, uint8_t*, uint32_t, uint32_t);
extern sample_function_ptr_t copy_to_ram();
extern void output_and_sample(uint16_t*, uint8_t*, sample_function_ptr_t, uint32_t);
extern void sampleLoop(uint16_t*, uint8_t*, sample_function_ptr_t, uint32_t);

int main(void) {
    WDT_A_holdTimer();

    CS_Init();
//    ADC14CTL0 = 0;
    ADC_Init();
    GPIO_Init();
    UART_Init();

    FPU_enableModule();

    uint8_t dac_table[NUM_DATA*2];

    int i;
    for(i=0;i<NUM_DATA*2;i++) {
    	dac_table[i] = DacTable_256_1[i];
    }

    sample_function_ptr_t sampleFunctionPointer = copy_to_ram();

    uint16_t data_buff[NUM_DATA];

	uint32_t bins[NUM_BINS] = {1};
	float real[NUM_BINS];
	float imag[NUM_BINS];
	float realresults[NUM_DATA];
	float imagresults[NUM_DATA];
	float powerresults[NUM_DATA];

	i = 0;

    while(1) {

    	P4OUT = dac_table[i & 0xFF];
    	i++;


//    	sampleLoop(data_buff, dac_table, sampleFunctionPointer, NUM_DATA);
//    	dft_float(data_buff, NUM_DATA, realresults, imagresults, powerresults);
//    	sendDFTUART(data_buff, powerresults, NUM_DATA);



//    	goertzels_float(data_buff, NUM_DATA, bins, NUM_BINS, real, imag);
//    	sendGoertzDataUART(NUM_BINS, real, imag);
    }
}