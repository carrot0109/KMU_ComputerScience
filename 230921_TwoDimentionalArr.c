#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	int arr[3][4] = {
		{1,2,3,4},
		{11,12,13,14},
		{21,22,23,24}
	};
	printf("##### 배열명 표현 #####\n\n");
	printf("arr	= %p\n", arr);			// 시작 주소 : 012FFB9C
	printf("*arr	= %p\n", *arr);		// arr[0]의 시작 주소 : 012FFB9C
	printf("**arr	= %d\n", **arr);	// 시작 주소의 값 : 1
	printf("\n");

	printf("arr + 0 = %p\n", arr + 0);	// 0번째 행열 시작 주소 : 012FFB9C
	printf("arr + 1 = %p\n", arr + 1);	// 1번째 행열 시작 주소 : 012FFBAC
	printf("arr + 2 = %p\n", arr + 2);	// 2번째 행열 시작 주소 : 012FFBBC
	printf("\n");

	printf("*(arr + 0) = %p\n", *(arr + 0));	// 0번째 행열 시작 주소 : 012FFB9C
	printf("*(arr + 1) = %p\n", *(arr + 1));	// 1번째 행열 시작 주소 : 012FFBAC
	printf("*(arr + 2) = %p\n", *(arr + 2));	// 2번째 행열 시작 주소 : 012FFBBC
	printf("\n");

	printf("*(arr) + 0 = %p\n", *(arr) + 0);	// 012FFB9C
	printf("*(arr) + 1 = %p\n", *(arr) + 1);	// 012FFBA0
	printf("*(arr) + 2 = %p\n", *(arr) + 2);	// 012FFBA4
}

int main() {
	test_func();

	return 0;
}
