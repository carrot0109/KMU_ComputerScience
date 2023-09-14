	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void TestFunc() {
		char str1[40] = "don't waste your youth";
		char str2[40] = "GfG";
		char str3[40];
		char str4[40];
		char str5[] = "let's dfink all the way";

		strcpy(str2, str1);
		strcpy(str3, "copy successful");
		strcpy(str4, str5);
		printf("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);
	}
	int main() {
		TestFunc();

		return 0;
	}
