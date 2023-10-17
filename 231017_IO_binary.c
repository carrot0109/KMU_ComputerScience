#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	FILE* fp1 = fopen("data1.txt", "wt");
	FILE* fp2 = fopen("data2.txt", "wb");

	if (fp1 == NULL) {
		printf("file open error\n");
		return;
	}

	if (fp2 == NULL) {
		printf("file open error\n");
		return;
	}

	int num = 65;
	fprintf(fp1, "%d", num);
	fwrite(&num, sizeof(num), 1, fp2);
	fclose(fp1);	fclose(fp2);


	fp1 = fopen("data1.txt", "rt");
	fp2 = fopen("data2.txt", "rb");

	if (fp1 == NULL) {
		printf("file open error\n");
		return;
	}

	if (fp2 == NULL) {
		printf("file open error\n");
		return;
	}

	num = 0;
	fscanf(fp1, "%d", &num);
	fwrite(&num, sizeof(num), 1, fp2);
	printf("%d\n", num);

	char str; 
	num = 0;
	fread(&num, sizeof(str), 1, fp2);
	printf("%d\n", num);

	fclose(fp1);	fclose(fp2);
}


int main() {
	test_func();
	return;
}
