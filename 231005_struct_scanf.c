#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	char name[32];
	int ID;
	char major[32];
	int age;
}Student;

void test_func() {
	Student s1, s2;

	printf("\n학생 1 이름 입력: \n");
	scanf("%s", s1.name);

	printf("\n학생 1 ID 입력: \n");
	scanf("%d", &(s1.ID));

	printf("\n학생 1 전공 입력: \n");
	scanf("%s", s1.major);

	printf("\n학생 1 나이 입력: \n");
	scanf("%d", &(s1.age));


	printf("\n학생 2 이름 입력: \n");
	scanf("%s", s2.name);

	printf("\n학생 2 ID 입력: \n");
	scanf("%d", &(s2.ID));

	printf("\n학생 2 전공 입력: \n");
	scanf("%s", s2.major);

	printf("\n학생 2 나이 입력: \n");
	scanf("%d", &(s2.age));

	printf("\n\n학생 1 정보 출력\n");
	printf("\n이름 : %s\n", s1.name);
	printf("ID : %d\n", s1.ID);
	printf("전공 : %s\n", s1.major);
	printf("나이 : %d\n\n", s1.age);

	printf("학생 2 정보 출력\n");
	printf("\n이름 : %s\n", s2.name);
	printf("ID : %d\n", s2.ID);
	printf("전공 : %s\n", s2.major);
	printf("나이 : %d\n\n", s2.age);
}

int main() {
	test_func();
	return 0;
}
