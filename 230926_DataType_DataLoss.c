#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func1() {
	int a = 0;
	double b = 0;

	a = 3.2;    // 자료 손실
	b = 3.2;

	printf("int 자료형 : %d\n", a);
	printf("double 자료형 : %lf\n", b);
}

void test_func2() {
	int a = 0;
	double b = 3.2;

	// a = b; --> warning 발생
	a = (int)b;	// 형변환 필요
	printf("int 자료형 : %d\n", a);
}

int main() {
	test_func1();
	test_func2();

	return 0;
}
