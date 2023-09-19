#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int* data) {
	int i = 0;
	for(i = 0; i < 5; i++) {
		printf("[%d]번째 값을 입력하시오 : ", i);
		scanf("%d", &data[i]);
	}
}

int sum(int* data) {
	int i = 0;
	int tmp = 0;

	for (i = 0; i < 5; i++) {
		tmp += data[i];
	}
	return tmp;
}

void sub_function() {
	int data[5] = { 0, };
	int i = 0, total = 0;

	input(data);
	for (i = 0; i < 5; i++) {
		printf("%d ", data[i]);
	}

	total = sum(data);
	printf("\n배열의 총합은 %d", total);
}

int main() {
	sub_function();

	return 0;
}
