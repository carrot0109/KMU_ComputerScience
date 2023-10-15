#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ex_func() {
	char str[20];
	FILE* fp = fopen("text[3].txt", "rt");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);
}
 
int main() {
	ex_func();
	return 0;
}
