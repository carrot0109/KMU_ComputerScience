#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	int age;
	double height;
	char name[20];
} PROFILE;

typedef struct {
	PROFILE pf;
	int ID;
	double grade;
} STUDENT;

void test_func() {
	STUDENT s1;
	printf("\n학생 1 이름 입력 : \n");
	scanf("%s", s1.pf.name);
	printf("\n학생 1 나이 입력 : \n");
	scanf("%d", &(s1.pf.age));
	printf("\n학생 1 키 입력 : \n");
	scanf("%s", &(s1.pf.height));
	printf("\n학생 1 ID 입력 : \n");
	scanf("%d", &s1.ID);
	printf("\n학생 1 성적 입력 : \n");
	scanf("%lf", &(s1.grade));

	printf("\n\n이름 : %s\n", s1.pf.name);
	printf("나이 : %d\n", s1.pf.age);
	printf("키 : %d\n", s1.pf.height);
	printf("아이디 : %d\n", s1.ID);
	printf("점수 : %lf\n", s1.grade);
}

int main() {
	test_func();
	return 0;
}
