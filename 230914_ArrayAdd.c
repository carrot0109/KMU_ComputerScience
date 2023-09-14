#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestFunc() {
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int arr3[10] = { 0, };
	int i = 0;

	for (i = 0; i < 10; i++) {
		arr3[i] = arr2[i] + arr1[i];
	}

	for (i = 0; i < 10; i++) {
		printf("arr3[%d] = %d\n", i, arr3[i]);
	}
}

int main() {
	TestFunc();

	return 0;
}
