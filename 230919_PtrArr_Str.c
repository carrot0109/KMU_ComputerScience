#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	char str[10] = "angel";
	char* ap = str;
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("str[i] : %c   *(str + i) : %c   *(ap + i) : %c   *(&str[i]) : %c   ap[i] : %c\n", str[i], *(str + i), *(ap + i), *(&str[i]), ap[i]);
	}
}

int main() {
	test_func();

	return 0;
}
