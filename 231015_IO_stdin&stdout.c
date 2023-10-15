#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex_func() {
	FILE* fp = fopen("data.txt", "wt");
	char buf[128] = { 0, };

	if (fp == NULL) {
		printf("file open error");
		return -1;
	}

	printf("문장을 입력하세요: ");
	fgets(buf, sizeof(buf), stdin);		// scan array by using stdin
	fputs(buf,fp);	// print scanned array into file

	fclose(fp);


	fp = fopen("data.txt","rt");

	if (fp == NULL) {
		printf("file open error");
		return -1;
	}

	fgets(buf, sizeof(buf), fp);	// Read the file and save the file to an array
	fputs(buf, stdout);		// Output the array to the monitor using stdout
}

int main() {
	ex_func();
	return 0;
}
