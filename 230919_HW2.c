#include <stdio.h>

void input(int* data, int len) {
	printf("값을 입력해주세요");
	printf("-----------------\n");
	for (int i = 0; i < len; i++) {
		printf("[%d]번 째 숫자 : ", i + 1);
		scanf_s("%d", &data[i]);
	}
	printf("\n");
}

int find_Max(int* data,int len) {
	int min = data[0];
	for (int i = 1; i < len; i++) {
		if (min > data[i])
			min = data[i];
	}
	return min;
}

void sub_Func() {
	int data[10] = { 0, };
	int i = 0;
	int len = sizeof(data) / sizeof(int);
	
	input(data,len);
	
	int min_value = find_Max(data, len);
	printf("min value is %d", min_value);
}

int main() {
	sub_Func();

	return 0;
}
