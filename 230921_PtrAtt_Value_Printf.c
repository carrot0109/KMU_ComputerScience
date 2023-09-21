#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func1() {
	int i, j;
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	
	int* ptr_ary[3] = { ary1,ary2,ary3 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("[%d][%d] : %d\t", i, j, ptr_ary[i][j]);
		}
		printf("\n");
	}
	printf("ptr_ary : %d\n", sizeof(ptr_ary));			// 4 x 3 = 12
	printf("ptr_ary[0] : %d\n", sizeof(ptr_ary[0]));	// 주소값을 표현하는 것은 데이터 타입에 상관없이 4바이트로 정해져있음 / 따라서 4
}

void test_func2() {
	int i, j;
	char arr1[3] = "abc";
	char arr2[3] = "efg";
	char arr3[3] = "ijk";

	char* ptr_arr[3] = { arr1,arr2,arr3 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("[%d][%d] : %c\t", i, j, ptr_arr[i][j]);
		}
		printf("\n");
	}
}

void test_func0() {
	int i, j;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int* ptr_arr[3] = { &num1,&num2, &num3 };

	for (i = 0; i < 3; i++) {
		printf("%d\t",*(ptr_arr[i]));		// 포인터 배열을 사용했으므로 저장된 값을 그대로 출력하기보다는 주소에서 참조연산자를 통해 꺼낸다는 느낌
	}
}

int main() {
	test_func1();
	printf("\n");
	test_func2();
	printf("\n");
	test_func0();

	return 0;
}
