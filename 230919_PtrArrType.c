#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	int arr[5] = { 1,2,3,4,5 };
	int* ap = arr;

	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("arr[i] : %d  *(arr + i) : %d  *(ap + i) : %d  *(&arr[i]) : %d  ap[i] : %d\n", arr[i], *(arr + i), *(ap + i), *(&arr[i]), ap[i]);
	}
}

int main() {
	test_func();

	return 0;
}
