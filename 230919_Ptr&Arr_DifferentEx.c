#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	int arr[5] = { 10,20,30,40,50 };
	int* ap = arr;

	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("*(arr + i) : %d		*arr + i : %d\n", *(arr + i), *arr + i);     
		// 첫 째 코드 : 주소 자체를 연산    둘 째 코드 : 주소를 통해 값을 불러드린 후 연산
	}
}

int main() {
	test_func();

	return 0;
}
