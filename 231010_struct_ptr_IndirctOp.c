#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

struct score {
	int kor, eng, mat;
};

void ex_func() {
	struct score a = { 90,80,70 };
	struct score* sp = &a;
	printf("국어 : %d\n", sp->kor);		// 간접참조연산자 "->"를 이용하여 간단히 멤버변수에 접근
	printf("영어 : %d\n", sp->eng);
	printf("수학 : %d\n", sp->mat);
}

int main() {
	ex_func();
	return 0;
}
