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
	printf("##### 부분배열표현 표현 #####\n\n");
	printf("arr[0] = %p\n",arr[0]);		// 0번째 행열 시작 주소 : 00B5FD84
	printf("arr[1] = %p\n", arr[1]);	// 1번째 행열 시작 주소 : 00B5FD94
	printf("arr[2] = %p\n", arr[2]);	// 2번째 행열 시작 주소 : 00B5FDA4
	printf("\n");	

	printf("arr[0] + 0 = %p\n", arr[0] + 0);	// 0번째 행열의 0번째 열 주소 : 00B5FD84
	printf("arr[0] + 1 = %p\n", arr[0] + 1);	// 0번째 행열의 1번째 열 주소 : 00B5FD88
	printf("arr[0] + 2 = %p\n", arr[0] + 2);	// 0번째 행열의 2번째 열 주소 : 00B5FD8C
	printf("arr[0] + 3 = %p\n", arr[0] + 3);	// 0번째 행열의 3번째 열 주소 : 00B5FD90
	printf("\n");

	printf("*(arr[0] + 0) = %d\n", *(arr[0] + 0));	// (0,0)의 값 : 1
	printf("*(arr[0] + 1) = %d\n", *(arr[0] + 1));	// (0,1)의 값 : 2
	printf("*(arr[0] + 2) = %d\n", *(arr[0] + 2));	// (0,2)의 값 : 3
	printf("*(arr[0] + 3) = %d\n", *(arr[0] + 3));  // (0,3)의 값 : 4
}

int main() {
	test_func();

	return 0;
}
