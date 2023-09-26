#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dm_ex_2_slave_1() {
	int data[10] = { 0 };	// 지역변수, stack영역 --> 하나의 코드 블록에서만 정의. 함수의 호출이 완료되면 소멸
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

	data = (int*)calloc(10, sizeof(int));	// 동적할당변수, heap 영역 --> 사용자가 직접 관리하는 영역. 프로그램이 끝나면 메모리가 소멸
	if (data == NULL) {
		printf("memory allocation error\n");	// 동적할당이 실패했을 경우 에러 체크
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
		free(data);	// 메모리 해제
	}
}


int main() {
	dm_ex_2_main();

	return 0;
}

/*
* 출력결과
0 in testMem1
1 in testMem1
2 in testMem1
3 in testMem1
4 in testMem1
5 in testMem1
6 in testMem1
7 in testMem1
8 in testMem1
9 in testMem1

0 in test2	// 소멸되서 남아있지 않아 쓰레기값
0 in test2
-2127563648 in test2
92 in test2
-2127563352 in test2
92 in test2
-858993460 in test2
20 in test2
-858993460 in test2
-858993460 in test2

0 in testMem2
1 in testMem2
2 in testMem2
3 in testMem2
4 in testMem2
5 in testMem2
6 in testMem2
7 in testMem2
8 in testMem2
9 in testMem2

0 in test2	// 계속 남아있음
1 in test2
2 in test2
3 in test2
4 in test2
5 in test2
6 in test2
7 in test2
8 in test2
9 in test2
*/
