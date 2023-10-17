#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	char str[20] = "apple banana";
	char ch;
	FILE* fp = NULL;

	fp = fopen("fputs_test.txt", "wt");
	if (fp == NULL) {
		printf("file open error");
		return;
	}

	fputs(str, fp);
	fclose(fp);

	fp = fopen("fputs_test.txt", "rt");
	if (fp == NULL) {
		printf("file open error");
		return;
	}
	
	ch = fgetc(fp);
	printf("%c\n", ch);

	fseek(fp, 5, SEEK_CUR);    // 위에서 한번 읽었기 때문에 파일위치자는 p부터 시작한다고 봄
	ch = fgetc(fp);
	printf("파일 위치지 이동후 %c", ch);
}


int main() {
	test_func();
	return;
}
