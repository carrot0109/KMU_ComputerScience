#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex_func() {
	char str[20] = "apple banana";
	FILE* fp = fopen("text[3].txt", "wt");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	fputs(str, fp);

	fclose(fp);
}
 
int main() {
	ex_func();
	return 0;
}
