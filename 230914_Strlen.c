	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void TestFunc() {
		char str[] = "Hang in there";
		
		int length = strlen(str);
		printf("Length of string is %d",length);

	}
	int main() {
		TestFunc();

		return 0;
	}
