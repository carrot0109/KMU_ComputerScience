#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	// *(asterisk)의 용도
	// 1. 포인터를 선언할 때
	// 2. 해당 주소에 들어있는 값에 접근할 때

	int a = 5;
	int* ptr = &a;
	
	printf("value of a is %d", *ptr);	// 주소에 들어있는 값 확인

	return 0;
}
