#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	FILE* fp = NULL;
	int data[5] = { 0. };

	fprintf(stdout, "input 5 numbers: \n");
	for (int i = 0; i < 5; i++) {
		scanf("%d",&data[i]);
	}

	fprintf(stdout, "writing 5 numbers to a file\n");
	fp = fopen("data1.txt", "wt");
	assert(fp != NULL);

	for (int i = 0; i < 5; i++) {
		fprintf(fp, "%d\n", data[i]);
	}

	if (fp != NULL) {
		fclose(fp);
		fp = NULL;
	}
}


int main() {
	test_func();
	return;
}
