#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>

void random_gen(int* data, int size) {
	int i;
	srand(time(NULL));

	for (i = 0; i < size; i++) {
		data[i] = rand() % 100;
	}
}

void print_arr(int data[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d \n", data[i]);
	}
}

int get_sum(int data[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += data[i];
	}
	return sum;
}

int main() {
	int num_data = 0;	// 배열의 수
	int* ptr;
	int sum = 0;

	printf("입력받을 정수의 개수는? ");
	scanf("%d", &num_data);

	ptr = (int*)calloc(num_data, sizeof(int));	// 메모리 동적할당

	if (ptr == NULL) {
		printf("memory error");
		return 0;
	}

	random_gen(ptr, num_data);
	print_arr(ptr, num_data);
	sum = get_sum(ptr, num_data);

	printf("\n\n총합 : %d", sum);

	return 0;
}
