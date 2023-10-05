#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct PROFILE0 {
	int age;
	double height;
	char name[20];
} pf0;	// 미리 변수 선언

typedef struct PROFILE1{
	int age;
	double height;
	char name[20];
} pf1;

void test_func() {
	pf0.age = 31;
	
	pf1 _pf1;	// 새로운 변수 선언 필요
	_pf1.age = 5;
}

int main() {
	test_func();
	return 0;
}
