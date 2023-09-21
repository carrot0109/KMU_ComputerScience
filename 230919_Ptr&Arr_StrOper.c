#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	char str[10] = "angel";
	char* ap = str;
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("*(ap + i) : %c   *ap + i : %c\n", *(ap + i), *ap + i);		// 값이 꺼내진 후에 연산했으므로 배열 그대로 출력되지 않음
	}
}

int main() {
	test_func();

	return 0;
}
