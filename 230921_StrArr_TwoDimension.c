#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	char arr[5][32] = { 0, };
	int i = 0, j = 0;

	printf("단어 5개를 입력하시오 \n");

	for (i = 0; i < 5; i++) {
		printf("%d 번째 단어 입력 : ", i + 1);
		scanf("%s", arr[i]);      // 단어 하나하나 입력이 아닌 문장 한번에 입력
	}

	for (i = 0; i < 5; i++) {
		printf("입력하신 %d번째 단어는 %s\n", i + 1, arr[i]);
	}
}

int main() {
	test_func();

	return 0;
}
