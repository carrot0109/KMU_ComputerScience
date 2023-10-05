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
	Student s1 = { "유재석",2003030,"기계공학과",40 };
	Student s2 = { "박명수",2005010,"컴퓨터공학과",50 };

	printf("%s\n", s1.name);		printf("%s\n", s2.name);
	printf("%d\n", s1.ID);			printf("%d\n", s2.ID);
	printf("%s\n", s1.major);		printf("%s\n", s2.major);
	printf("%d\n", s1.age);			printf("%d\n", s2.age);
}

int main() {
	test_func();
	return 0;
}
