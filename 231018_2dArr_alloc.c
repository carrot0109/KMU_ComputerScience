#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	int** arr;
	arr = (int**)malloc(2*sizeof(int*));	// 행 부분 할당
	int tmp[6] = { 1,10,100,2,20,200 };

	for (int i = 0; i < 2; i++) {
		arr[i] = (int*)malloc(3 * sizeof(int));		// 열 부분 할당
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = tmp[i*3+j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}


int main() {
	test_func();
	return;
}
