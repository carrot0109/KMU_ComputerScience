#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int arr[][4],int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("[%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
}

void test_func() {
	int arr[3][4] = { 0, };
	int i = 0, j = 0;
	int row = 3, col = 4;

	input(arr, row, col);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	test_func();

	return 0;
}
