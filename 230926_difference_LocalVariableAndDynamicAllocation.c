#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dm_ex_2_slave_1() {
	int data[10] = { 0 };
	int i;

	for (i = 0; i < 10; i++) {
		data[i] = i;
		printf("%d in testMem1\n", data[i]);
	}

	return data;
}

int* dm_ex_2_slave_2() {
	int* data = NULL;
	int i;

	data = (int*)calloc(10, sizeof(int));
	if (data == NULL) {
		printf("memory allocation error\n");
		return NULL;
	}

	for (i = 0; i < 10; i++) {
		data[i] = i;
		printf("%d in testMem2\n", data[i]);
	}

	return data;
}

void dm_ex_2_main() {
	int* data = NULL;
	int i;

	data = dm_ex_2_slave_1();
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d in test2\n", data[i]);
	}

	printf("\n");
	data = dm_ex_2_slave_2();
	if (data != NULL) {
		printf("\n");
		for (i = 0; i < 10; i++) {
			printf("%d in test2\n", data[i]);
		}
	}

	if (data != NULL) {
		free(data);
	}
}


int main() {
	dm_ex_2_main();

	return 0;
}
