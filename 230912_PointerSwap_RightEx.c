#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TestFunction(int* num1, int* num2) {		// 주소값을 받기 위해 포인터 변수 설정
	int tmp = 0;
	
	tmp = *num1;				// 포인터 변수 num1에 저장된 값을 꺼내기 위해 참조연산자 사용
	*num1 = *num2;
	*num2 = tmp;

	return 0;
}

int main() {
	int a = 5;
	int b = 10;
	printf("a = %d\nb = %d\n", a, b);

	TestFunction(&a, &b);		// 저장된 값 자체를 바꾸기 위해 주소 전달

	printf("\n스왑 후\n\n");
	printf("a = %d\nb = %d\n", a, b);

	return 0;
}
