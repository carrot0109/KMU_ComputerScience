#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int* data,int data_size) {
	int i = 0;
	for(i = 0; i < data_size; i++) {
		printf("[%d]번째 값을 입력하시오 : ", i);
		scanf("%d", &data[i]);
	}
}

float avg(int* data, int data_size) {
	int i = 0;
	float tmp = 0;

	for (i = 0; i < data_size; i++) {
		tmp += data[i];
	}
	tmp = tmp / (float)data_size;
	return tmp;
}

void sub_function() {
	int data[10] = { 0, };
	int data_size = sizeof(data) / sizeof(int);
	int i = 0;
	float average = 0.0;

	input(data, data_size);
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}

	average = avg(data,data_size);
	printf("\n배열의 평균은 %lf", average);
}

int main() {
	sub_function();

	return 0;
}
