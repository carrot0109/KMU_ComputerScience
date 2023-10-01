#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>	// 동적할당 에러체크


int main() {
	int** ptr = NULL;
	int i, j;

	// 3 x 3 matrix 
	// step 1

	ptr = (int**)calloc(3, sizeof(int*));

	for (i = 0; i < 3; i++) {
		ptr[i] = (int*)calloc(3, sizeof(int));
	}

	assert(ptr != NULL);	

	// 데이터 입력
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ptr[i][j]);
		}
	}

	printf("\n");

	// 데이터 출력
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", ptr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
