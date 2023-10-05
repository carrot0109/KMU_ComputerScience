#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	int name[32];
	int ID;
	char major[32];
	int age;
} STUDENT;


void test_func() {
	STUDENT s[3];

	printf("[학생 정보 입력]\n");
	for (int i = 0; i < 3; i++) {
		printf("\n학생 %d 이름 입력 : \n", i + 1);
		scanf("%s", s[i].name);

		printf("\n학생 %d ID 입력 : \n", i + 1);
		scanf("%d", &(s[i].ID));

		printf("\n학생 %d 전공 입력 : \n", i + 1);
		scanf("%s", s[i].major);

		printf("\n학생 %d 나이 입력 : \n", i + 1);
		scanf("%d", &s[i].age);
	}

	printf("\n[학생 정보 출력]\n");
	for (int i = 0; i < 3; i++) {
		printf("이름 : %s\n", s[i].name);
		printf("ID : %d\n", s[i].ID);
		printf("major : %s\n", s[i].major);
		printf("age : %d\n\n", s[i].age);
	}
}

int main() {
	test_func();
	return 0;
}
