#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex_func() {
	char str1[20] = "apple banana";
	char str2[20] = "apple banana";
	char str3[20] = "apple mango";

	int result = 0;

	result = memcmp(str1, str2, sizeof(char) * 20);
	if (result == 0)
		printf("same memory");
	else
		printf("different memory");	

	printf("\n");

	result = memcmp(str1, str3, sizeof(char) * 20);
	if (result == 0)
		printf("same memory");
	else
		printf("different memory");
}

int main() {
	ex_func();
	return 0;
}
