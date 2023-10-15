#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex_func() {
	FILE* fp = fopen("text[1].txt", "wt");

	if (fp == NULL) {
		printf("file open error");
		return;
	}
	fputc('a', fp);
	fputc('p', fp);
	fputc('p', fp);
	fputc('l', fp);
	fputc('e', fp);
	fputc('\n', fp);

	fclose(fp);
}

int main() {
	ex_func();
	return 0;
}
