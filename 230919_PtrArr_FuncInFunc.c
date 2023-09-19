#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func2(int* data) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		data[i] = i;
	}
}

void test_func() {
	int data[5] = { 0, };
	int i = 0;

	test_func2(data);

	for (i = 0; i < 5; i++) {
		printf("%d ", data[i]);
	}
}

int main() {
	test_func();

	return 0;
}
