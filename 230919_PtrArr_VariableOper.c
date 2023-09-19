#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	int arr[5] = { 1,2,3,4,5 };
	int* ap = arr;
	int i = 0;

	ap = ap + 0;
	for (i = 0; i < 5; i++) {
		printf("%d  ", *(ap + i));
	}
	printf("\n");

	ap += 2;					// arr[0] 을 가리키던 주소가 +2 의 연산을 통해 arr[3] 을 가리키게 됨
	for (i = 0; i < 5; i++) {
		printf("%d  ", *(ap + i));      // 30부터 시작하므로 뒤에는 쓰레기값이 출력됨
	}

	// 포인터 변수 ap 와 달리 arr 은 변수가 아닌 주소를 가지는 배열명이기 때문에 연산 및 값 변경 자체가 불가능
}

int main() {
	test_func();

	return 0;
}
