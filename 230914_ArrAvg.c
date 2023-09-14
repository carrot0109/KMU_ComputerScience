#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestFunc() {
	int arr[10] = { 0, };
	int i = 0;
	float avg = 0;

	for (i = 0; i < 10; i++) {
		arr[i] = i + 10;
	}
	for (i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	for (i = 0; i < 10; i++) {
		avg = avg + arr[i];
	}
	avg = avg / 10;

	printf("average is %lf", avg);
}

int main() {
	TestFunc();

	return 0;
}
