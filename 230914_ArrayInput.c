#define _CRT_SEURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a[10];
	int  i = 0;

	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("\na[%d] = %d", i, a[i]);
	}

	return 0;
}
