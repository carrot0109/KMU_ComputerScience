#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	char buf[] = "hello world";
	int data = 100;
	FILE* bfp = NULL;
	FILE* tfp = NULL;

	bfp = fopen("bindata.dat", "wb");
	if (bfp == NULL) {
		printf("bfp file open error");
		return;
	}

	tfp = fopen("textdata.dat", "wt");
	if (bfp == NULL) {
		printf("tfp file open error");
		return;
	}

	fwrite(buf, sizeof(char), sizeof(buf), bfp);
	fwrite(&data, sizeof(int), 1, bfp);

	fprintf(tfp, "%s", buf);
	fprintf(tfp, "%d", data);


	if (bfp != NULL) {
		fclose(bfp);
	}

	if (tfp != NULL) {
		fclose(tfp);
	}
}


int main() {
	test_func();
	return;
}
