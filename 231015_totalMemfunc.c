#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex_func() {
	int dataA[5] = { 0 };
	int dataB[5] = { 0 };
	int dataC[5] = { 0 };
	
	int i, ret;

	memset(dataA, 0x0A, sizeof(int) * 5);		// memory setting
	memset(dataB, 0x0B, sizeof(int) * 5);
	memset(dataC, 0x0C, sizeof(int) * 5);

	printf("[dataA]\n");
	for (i = 0; i < sizeof(dataA) / sizeof(dataA[0]); i++) {
		printf("%08X\t", dataA[i]);
	}

	printf("\n[dataB]\n");
	for (i = 0; i < sizeof(dataB) / sizeof(dataB[0]); i++) {
		printf("%08X\t", dataB[i]);
	}

	printf("\n[dataC]\n");
	for (i = 0; i < sizeof(dataC) / sizeof(dataC[0]); i++) {
		printf("%08X\t", dataC[i]);
	}

	memcpy(dataB, dataC, sizeof(int) * 5);
	printf("\n\n[dataB]\n");
	for (i = 0; i < sizeof(dataA) / sizeof(dataA[0]); i++) {
		printf("%08X\t", dataB[i]);
	}

	ret = memcmp(dataA, dataB, sizeof(int) * 5);		// 

	if (ret > 0) {
		printf("\n\n[dataA]\n");
		for (i = 0; i < sizeof(dataA) / sizeof(dataA[0]); i++) {
			printf("%08X\t", dataA[i]);
		}
	}

	else if (ret < 0) {
		printf("\n\n[dataB]\n");
		for (i = 0; i < sizeof(dataA) / sizeof(dataA[0]); i++) {
			printf("%08X\t", dataB[i]);
		}
	}

}

int main() {
	ex_func();
	return 0;
}
