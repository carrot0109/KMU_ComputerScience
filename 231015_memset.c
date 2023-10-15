#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex_func() {
	int data[10] = { 0, };

	printf("before memset\n");
	for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
		printf("data[%d] : %08x\n", i, data[i]);
	}

	memset(data + 3, 0x456, sizeof(int) * 3);

	printf("\nafter memset\n");
	for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
		printf("data[%d] : %08x\n", i, data[i]);
	}
}

int main() {
	ex_func();
	return 0;
}
