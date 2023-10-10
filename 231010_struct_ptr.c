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
	struct score a = { 90,80,70 };	// 구조체 변수 a
	struct score* sp = &a;  // 구조체 포인터 변수
	printf("국어 : %d\n", (*sp).kor);  
	
	// 멤버 참조연산자 "." 을 이용하여 멤버변수에 접근
	// 참조연산자를 이용하여 주소에 해당하는 구조체변수에 접근
	// "." 이 "*" 보다 우선순위가 높음!! --> 괄호 필수
	
	printf("영어 : %d\n", (*sp).eng);
	printf("수학 : %d\n", (*sp).mat);
}

int main() {
	ex_func();
	return 0;
}
