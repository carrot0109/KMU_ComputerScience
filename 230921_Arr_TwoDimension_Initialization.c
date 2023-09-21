#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	int arr[3][4] = { 0, };
	int i = 0, j = 0;

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
