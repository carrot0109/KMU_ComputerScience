#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex_func() {
	char ch;
	FILE* fp = fopen("text[2].txt", "rt");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	printf("당신이 입력한 문장은: ");
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		printf("%c",ch);	// fgetc --> 문자 한개씩 가져오기 때문에 문자 형식
	}
	printf("입니다.");

	fclose(fp);
}
 
int main() {
	ex_func();
	return 0;
}
