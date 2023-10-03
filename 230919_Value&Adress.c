#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	int data = 5;
	int* ptr = &data;

	printf("%d\n", data);		// data의 저장된 값				: 5
	printf("%p\n", &data);		// data의 주소					: 0096F9B4
	printf("%d\n", *(&data));	// data의 주소에 담겨져 있는 값			: 5
	printf("%p\n", ptr);		// ptr이 저장하고 있는 주소값			: 0096F9B4 
	printf("%d\n", *ptr);		// ptr이 가리키는 주소에 담겨져 있는 값 		: 5
	printf("%p\n", &ptr);		// 포인터 변수 ptr 의 주소값 			: 0096F9A8
}

int main() {
	test_func();

	return 0;
}
