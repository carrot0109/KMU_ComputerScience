#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	int* pArray[2] = { 0, };
	int i, j;

	int arry1[3] = { 1,2,3 };
	int arry2[3] = { 10,20,30 };

	pArray[0] = arry1;
	pArray[1] = arry2;

	printf("print value using only array\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", pArray[i][j]);
		}
		printf("\n");
	}

	int** ptr = pArray;	// pArray 의 주소값 ptr에 저장

	printf("\nprint value using pointer\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", ptr[i][j]);	// 사실상 ptr[i] = pArray[i]
		}
		printf("\n");
	}
}


int main() {
	test_func();
	return;
}
