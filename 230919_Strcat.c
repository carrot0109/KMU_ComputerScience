#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	char tmp1[40];
	char tmp2[40];
	char tmp3[40];
	char tmp4[40];

	strcpy(tmp1, "Apple");
	strcat(tmp1, "Pen");
	strcpy(tmp3, tmp1);

	strcpy(tmp2, "Pen");
	strcat(tmp2, "Pineapple");
	strcpy(tmp4, tmp2);

	strcat(tmp4, tmp3);

	printf("%s\n", tmp1);
	printf("%s\n", tmp2);
	printf("%s\n", tmp3);
	printf("%s\n", tmp4);
}

int main() {
	test_func();
	return 0;

}
