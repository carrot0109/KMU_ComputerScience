#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestFunc() {
	int arr[5] = { 0, };
	int i = 0;
	int MinValue = 0;
	int MaxValue = 0;

	for (i = 0; i < 5; i++) {
		printf("%d번째 배열에 들어갈 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	MinValue = arr[0];	MaxValue = arr[0];

	for (i = 1; i < 5; i++) {
		if (arr[i] > MaxValue) {
			MaxValue = arr[i];
		}
		if (arr[i] < MinValue) {
			MinValue = arr[i];
		}
	}

	printf("최소값 : %d\n최대값 : %d", MinValue, MaxValue);
}

int main() {
	TestFunc();

	return 0;
}
