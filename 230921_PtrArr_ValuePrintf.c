#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	int i, j;
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 11,12,13,14 };
	int arr3[4] = { 21,22,23,24 };
	
	int* ptr1[3] = { arr1,arr2,arr3 };

	int arr4[3][4] = { {31,32,33,34},{41,42,43,44},{51,52,53,54} };
	int* ptr2[3] = { arr4[0],arr4[1],arr4[2] };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(ptr1[i] + j));
		}
		printf("\n");
	}

	printf("\n\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(ptr2[i] + j));
		}
		printf("\n");
	}

}

int main() {
	test_func();

	return 0;
}
