#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	double* mp;	// malloc 포인터
	double* cp;	// calloc 포인터
	int i = 0;

	mp = (double*)malloc(5 * sizeof(double));	// malloc

	printf("malloc \n");
	for (i = 0; i < 5; i++) {
		printf("%lf \n", mp[i]);	// 초기값이 없음
	}

	cp = (double*)calloc(5, sizeof(double));	// calloc

	printf("calloc \n");
	for (i = 0; i < 5; i++) {
		printf("%lf \n", cp[i]);	// 초기값이 0
	}
}

int main() {
	test_func();

	return 0;
}
