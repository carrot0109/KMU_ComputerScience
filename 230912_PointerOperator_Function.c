#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TestFunction(int num1, int num2) {		// ptr, ptr2가 가리키는 주소에 저장된 값을 인자로 받음
	return num2 - num1;
}

int main() {
	int a = 5;	int b = 10;
	int* ptr;	int* ptr2;

	ptr = &a;
	ptr2 = &b;

	printf("b - a = %d \n", TestFunction(*ptr, *ptr2) );

	return 0;
}
