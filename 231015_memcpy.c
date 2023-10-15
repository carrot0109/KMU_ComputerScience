#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex_func() {
	char str1[20] = "apple banana";
	char str2[20] = "NULL";
	char str3[20] = "NULL";

	memcpy(str2, str1, 14);		// Can specify a size
	strcpy(str3, str1);

	fputs(str2, stdout);
	printf("\n");
	fputs(str3, stdout);
}

int main() {
	ex_func();
	return 0;
}
