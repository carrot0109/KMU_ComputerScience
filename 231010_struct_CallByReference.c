#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

struct score {
	int kor, eng, mat;
};

int sum(struct score* tmp) {
	return (tmp->kor + tmp->eng + tmp->mat);
}

void ex_func() {
	struct score a = { 90,80,70 };
	struct score* sp = &a;    // 포인터 변수 생성
	printf("합 : %d\n", sum(sp));  // 포인터 변수를 인자로 전달
}

int main() {
	ex_func();
	return 0;
}
