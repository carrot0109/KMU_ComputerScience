#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestFunc() {
	int arr1[10] = { 0, };
	int arr2[10] = { 0, };
	int arr3[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		printf("arr1[%d]의 값 : ", i);
		scanf("%d", &arr1[i]);
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("arr2[%d]의 값 : ", i);
		scanf("%d", &arr2[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("arr3[%d]의 값 : %d\n", i,arr3[i]);
	}
	printf("\n");

	int Max = arr3[0];
	int Min = arr3[0];

	for (int i = 1; i < 10; i++) {
		if (arr3[i] < Min)
			Min = arr3[i];
		if (arr3[i] > Max)
			Max = arr3[i];
	}
	
	printf("최소: %d\n최대: %d", Min, Max);

}

int main() {
	TestFunc();

	return 0;
}
