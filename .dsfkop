#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func1() {
	int i;
	int num1 = 1, num2 = 2, num3 = 3;
	int* ptr_ary[3] = { &num1,&num2, &num3 };

	printf("주소값 : %p %p %p\n", ptr_ary[0], ptr_ary[1], ptr_ary[2]);		// 006FFBD0 006FFBC4 006FFBB8
	printf("주소값 : %p %p %p\n", *ptr_ary, *(ptr_ary+1), *(ptr_ary+2));	// 006FFBD0 006FFBC4 006FFBB8
	printf("값 : %d %d %d\n", *ptr_ary[0], *ptr_ary[1], *ptr_ary[2]);		// 1 2 3
	printf("값 : %d %d %d\n", **ptr_ary, **(ptr_ary+1), **(ptr_ary+2));		// 1 2 3
}


int main() {
	test_func1();

	return 0;
}
