#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	int array[3][2] = { 
		{10,20},	
		{30,40},
		{50,60}
	};
	int(*ptr)[2] = NULL;	
	ptr = array;

	printf("print value using only array\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	

	printf("print value using pointer\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", ptr[i][j]);
		}
		printf("\n");
	}
}


int main() {
	test_func();
	return;
}
