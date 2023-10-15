#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex_func() {
	char ch;
	FILE* fp = fopen("text[2].txt", "wt");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	printf("문장을 입력하세요: ");
	while (1) {
		ch = getchar();
		if (ch == '\n') {
			break;
		}
		fputc(ch, fp);		// fp로 바로 가는 것이 아니라 버퍼에 한 단어씩 저장
	}
	fputc('\n', fp);		// \n 입력시 버퍼에 있던것을 통해 파일 생성

	fclose(fp);
}
 
int main() {
	ex_func();
	return 0;
}
