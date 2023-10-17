#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	int array[5] = { 10,20,30,40,50 };
	int* ptr = array;

	printf("print value using only array\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", array[i]);
	}
	printf("\n");

	printf("print value using pointer\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", *(ptr+i));
	}
}


int main() {
	test_func();
	return;
}
