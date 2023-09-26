#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	int n = 0, i = 0;
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);
	int* score;		// 포인터 선언
	score = (int*)malloc(n * sizeof(int));	// 메모리 할당 + 포인터에 연결		// (int*) : 어떤 포인터로 사용할지 형변한 한 것!
	// 배열은 컴파일을 할 때 크기가 결정 되어야 하기 때문에 동적할당을 안할 시 오류 발생

	for (i = 0; i < n; i++) {
		printf("[%d]번째 학생 점수를 입력하세요 : ", i + 1);
		scanf("%d", &score[i]);
	}

	for (i = 0; i < n; i++) {
		printf("\n[%d]번째 학생 점수 = %d\n", i + 1, score[i]);
	}

	free(score);	// 포인터가 가리키는 공간에 대해 메모리 값 반환
	// 동적 할당 후 메모리 해제를 하지 않으면 메모리 누수가 생김 --> 따라서 메모리 해제 수행
}

int main() {
	test_func();

	return 0;
}
