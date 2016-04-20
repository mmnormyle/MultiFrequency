#include "constants.h"

const uint8_t DacTable_256_1[256] = {30, 31, 31, 32, 33, 34, 34, 35,
		36, 37, 37, 38, 39, 39, 40, 41,
		41, 42, 43, 43, 44, 45, 45, 46,
		47, 47, 48, 48, 49, 50, 50, 51,
		51, 52, 52, 53, 53, 54, 54, 55,
		55, 55, 56, 56, 56, 57, 57, 57,
		58, 58, 58, 58, 59, 59, 59, 59,
		59, 60, 60, 60, 60, 60, 60, 60,
		60, 60, 60, 60, 60, 60, 60, 60,
		59, 59, 59, 59, 59, 58, 58, 58,
		58, 57, 57, 57, 56, 56, 56, 55,
		55, 55, 54, 54, 53, 53, 52, 52,
		51, 51, 50, 50, 49, 48, 48, 47,
		47, 46, 45, 45, 44, 43, 43, 42,
		41, 41, 40, 39, 39, 38, 37, 37,
		36, 35, 34, 34, 33, 32, 31, 31,
		30, 29, 29, 28, 27, 26, 26, 25,
		24, 23, 23, 22, 21, 21, 20, 19,
		19, 18, 17, 17, 16, 15, 15, 14,
		13, 13, 12, 12, 11, 10, 10, 9,
		9, 8, 8, 7, 7, 6, 6, 5,
		5, 5, 4, 4, 4, 3, 3, 3,
		2, 2, 2, 2, 1, 1, 1, 1,
		1, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 2, 2, 2,
		2, 3, 3, 3, 4, 4, 4, 5,
		5, 5, 6, 6, 7, 7, 8, 8,
		9, 9, 10, 10, 11, 12, 12, 13,
		13, 14, 15, 15, 16, 17, 17, 18,
		19, 19, 20, 21, 21, 22, 23, 23,
		24, 25, 26, 26, 27, 28, 29, 29};


const uint8_t DacTable_256_1_3_5[256] = {30, 32, 34, 37, 39, 41, 42, 44,
		46, 47, 49, 50, 51, 51, 52, 52,
		52, 52, 52, 52, 51, 50, 49, 48,
		47, 46, 45, 44, 42, 41, 40, 38,
		37, 36, 35, 34, 33, 32, 31, 31,
		30, 30, 30, 30, 30, 30, 31, 31,
		32, 32, 33, 33, 34, 35, 36, 36,
		37, 38, 38, 39, 39, 40, 40, 40,
		40, 40, 40, 40, 39, 39, 38, 38,
		37, 36, 36, 35, 34, 33, 33, 32,
		32, 31, 31, 30, 30, 30, 30, 30,
		30, 31, 31, 32, 33, 34, 35, 36,
		37, 38, 40, 41, 42, 44, 45, 46,
		47, 48, 49, 50, 51, 52, 52, 52,
		52, 52, 52, 51, 51, 50, 49, 47,
		46, 44, 42, 41, 39, 37, 34, 32,
		30, 28, 26, 23, 21, 19, 18, 16,
		14, 13, 11, 10, 9, 9, 8, 8,
		8, 8, 8, 8, 9, 10, 11, 12,
		13, 14, 15, 16, 18, 19, 20, 22,
		23, 24, 25, 26, 27, 28, 29, 29,
		30, 30, 30, 30, 30, 30, 29, 29,
		28, 28, 27, 27, 26, 25, 24, 24,
		23, 22, 22, 21, 21, 20, 20, 20,
		20, 20, 20, 20, 21, 21, 22, 22,
		23, 24, 24, 25, 26, 27, 27, 28,
		28, 29, 29, 30, 30, 30, 30, 30,
		30, 29, 29, 28, 27, 26, 25, 24,
		23, 22, 20, 19, 18, 16, 15, 14,
		13, 12, 11, 10, 9, 8, 8, 8,
		8, 8, 8, 9, 9, 10, 11, 13,
		14, 16, 18, 19, 21, 23, 26, 28};


/*const uint8_t DacTable_128_1_3_5[128] = {30, 34, 39, 42, 46, 49, 51, 52,
		52, 52, 51, 49, 47, 45, 42, 40,
		37, 35, 33, 31, 30, 30, 30, 31,
		32, 33, 34, 36, 37, 38, 39, 40,
		40, 40, 39, 38, 37, 36, 34, 33,
		32, 31, 30, 30, 30, 31, 33, 35,
		37, 40, 42, 45, 47, 49, 51, 52,
		52, 52, 51, 49, 46, 42, 39, 34,
		30, 26, 21, 18, 14, 11, 9, 8,
		8, 8, 9, 11, 13, 15, 18, 20,
		23, 25, 27, 29, 30, 30, 30, 29,
		28, 27, 26, 24, 23, 22, 21, 20,
		20, 20, 21, 22, 23, 24, 26, 27,
		28, 29, 30, 30, 30, 29, 27, 25,
		23, 20, 18, 15, 13, 11, 9, 8,
		8, 8, 9, 11, 14, 18, 21, 26};

const uint8_t DacTable_128_1[128] = {30, 31, 33, 34, 36, 37, 39, 40,
		41, 43, 44, 45, 47, 48, 49, 50,
		51, 52, 53, 54, 55, 56, 56, 57,
		58, 58, 59, 59, 59, 60, 60, 60,
		60, 60, 60, 60, 59, 59, 59, 58,
		58, 57, 56, 56, 55, 54, 53, 52,
		51, 50, 49, 48, 47, 45, 44, 43,
		41, 40, 39, 37, 36, 34, 33, 31,
		30, 29, 27, 26, 24, 23, 21, 20,
		19, 17, 16, 15, 13, 12, 11, 10,
		9, 8, 7, 6, 5, 4, 4, 3,
		2, 2, 1, 1, 1, 0, 0, 0,
		0, 0, 0, 0, 1, 1, 1, 2,
		2, 3, 4, 4, 5, 6, 7, 8,
		9, 10, 11, 12, 13, 15, 16, 17,
		19, 20, 21, 23, 24, 26, 27, 29};

const uint8_t DacTable_296_1_3_5[296] = {30, 32, 34, 36, 37, 39, 41, 43,
		44, 45, 47, 48, 49, 50, 51, 51,
		52, 52, 52, 52, 52, 52, 52, 51,
		50, 50, 49, 48, 47, 46, 45, 44,
		43, 42, 40, 39, 38, 37, 36, 35,
		34, 33, 33, 32, 31, 31, 31, 30,
		30, 30, 30, 30, 30, 31, 31, 31,
		32, 32, 33, 34, 34, 35, 35, 36,
		37, 37, 38, 38, 39, 39, 39, 40,
		40, 40, 40, 40, 40, 40, 39, 39,
		39, 38, 38, 37, 37, 36, 35, 35,
		34, 34, 33, 32, 32, 31, 31, 31,
		30, 30, 30, 30, 30, 30, 31, 31,
		31, 32, 33, 33, 34, 35, 36, 37,
		38, 39, 40, 42, 43, 44, 45, 46,
		47, 48, 49, 50, 50, 51, 52, 52,
		52, 52, 52, 52, 52, 51, 51, 50,
		49, 48, 47, 45, 44, 43, 41, 39,
		37, 36, 34, 32, 30, 28, 26, 24,
		23, 21, 19, 17, 16, 15, 13, 12,
		11, 10, 9, 9, 8, 8, 8, 8,
		8, 8, 8, 9, 10, 10, 11, 12,
		13, 14, 15, 16, 17, 18, 20, 21,
		22, 23, 24, 25, 26, 27, 27, 28,
		29, 29, 29, 30, 30, 30, 30, 30,
		30, 29, 29, 29, 28, 28, 27, 26,
		26, 25, 25, 24, 23, 23, 22, 22,
		21, 21, 21, 20, 20, 20, 20, 20,
		20, 20, 21, 21, 21, 22, 22, 23,
		23, 24, 25, 25, 26, 26, 27, 28,
		28, 29, 29, 29, 30, 30, 30, 30,
		30, 30, 29, 29, 29, 28, 27, 27,
		26, 25, 24, 23, 22, 21, 20, 18,
		17, 16, 15, 14, 13, 12, 11, 10,
		10, 9, 8, 8, 8, 8, 8, 8,
		8, 9, 9, 10, 11, 12, 13, 15,
		16, 17, 19, 21, 23, 24, 26, 28}; */

/*const uint8_t DacTable296_1[296] = {30, 31, 31, 32, 33, 33, 34, 34,
		35, 36, 36, 37, 38, 38, 39, 39,
		40, 41, 41, 42, 42, 43, 44, 44,
		45, 45, 46, 46, 47, 47, 48, 48,
		49, 49, 50, 50, 51, 51, 52, 52,
		53, 53, 53, 54, 54, 54, 55, 55,
		56, 56, 56, 56, 57, 57, 57, 58,
		58, 58, 58, 58, 59, 59, 59, 59,
		59, 59, 60, 60, 60, 60, 60, 60,
		60, 60, 60, 60, 60, 60, 60, 60,
		60, 60, 60, 59, 59, 59, 59, 59,
		59, 58, 58, 58, 58, 58, 57, 57,
		57, 56, 56, 56, 56, 55, 55, 54,
		54, 54, 53, 53, 53, 52, 52, 51,
		51, 50, 50, 49, 49, 48, 48, 47,
		47, 46, 46, 45, 45, 44, 44, 43,
		42, 42, 41, 41, 40, 39, 39, 38,
		38, 37, 36, 36, 35, 34, 34, 33,
		33, 32, 31, 31, 30, 29, 29, 28,
		27, 27, 26, 26, 25, 24, 24, 23,
		22, 22, 21, 21, 20, 19, 19, 18,
		18, 17, 16, 16, 15, 15, 14, 14,
		13, 13, 12, 12, 11, 11, 10, 10,
		9, 9, 8, 8, 7, 7, 7, 6,
		6, 6, 5, 5, 4, 4, 4, 4,
		3, 3, 3, 2, 2, 2, 2, 2,
		1, 1, 1, 1, 1, 1, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 1,
		1, 1, 1, 1, 1, 2, 2, 2,
		2, 2, 3, 3, 3, 4, 4, 4,
		4, 5, 5, 6, 6, 6, 7, 7,
		7, 8, 8, 9, 9, 10, 10, 11,
		11, 12, 12, 13, 13, 14, 14, 15,
		15, 16, 16, 17, 18, 18, 19, 19,
		20, 21, 21, 22, 22, 23, 24, 24,
		25, 26, 26, 27, 27, 28, 29, 29};

const uint8_t DacTable_100_1[100] = {30, 32, 34, 36, 37, 39, 41, 43,
		44, 46, 48, 49, 51, 52, 53, 54,
		55, 56, 57, 58, 59, 59, 59, 60,
		60, 60, 60, 60, 59, 59, 59, 58,
		57, 56, 55, 54, 53, 52, 51, 49,
		48, 46, 44, 43, 41, 39, 37, 36,
		34, 32, 30, 28, 26, 24, 23, 21,
		19, 17, 16, 14, 12, 11, 9, 8,
		7, 6, 5, 4, 3, 2, 1, 1,
		1, 0, 0, 0, 0, 0, 1, 1,
		1, 2, 3, 4, 5, 6, 7, 8,
		9, 11, 12, 14, 16, 17, 19, 21};*/

