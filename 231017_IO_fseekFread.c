#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_func() {
	int dataList[100] = { 0, };
	int data = 0;
	FILE* bfp = NULL;

	bfp = fopen("numbers.dat", "wb");
	
	for (int i = 0; i < sizeof(dataList) / sizeof(int); i++) {
		dataList[i] = i;
	}

	fwrite(dataList, sizeof(dataList), 1, bfp);
	fclose(bfp);

	bfp = fopen("numbers.dat", "rb");

	fseek(bfp, 4 * (50 - 1), SEEK_SET);		// 0번째 인자에서 49칸 이동 --> 49
	fread(&data, sizeof(int), 1, bfp);

	printf("%d\n", data);

	fclose(bfp);
}


int main() {
	test_func();
	return;
}
