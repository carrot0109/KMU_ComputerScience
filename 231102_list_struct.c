#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <assert.h>

#define MAX_STUDENT 10

typedef struct _STUDENT_ {
	char name[32];
	int age;
}STUDENT;

typedef struct _STUDENT_LIST_ {
	STUDENT list[MAX_STUDENT];	// 구조체 배열
	int numOfStudents;	// 학생 수 정보
}STUDENT_LIST;

void printStudents(STUDENT_LIST* stuList) {
	for (int i = 0;i < stuList->numOfStudents;i++) {
		printf("[%d STUDENT] Name: %s, Age: %d\n", i + 1, stuList->list[i].name, stuList->list[i].age);
	}
	printf("\n");
}

void addStudentAtStart(STUDENT_LIST* stuList, STUDENT* student) {
	if (MAX_STUDENT <= stuList->numOfStudents) {
		fprintf(stderr, "Error, too many students\n");
		return;
	}
	else {
		for (int i = stuList->numOfStudents - 1;i >= 0;i--) {
			stuList->list[i + 1] = stuList->list[i];
		}
		stuList->list[0] = *student;
		stuList->numOfStudents += 1;
	}
}

void addStudentAtMiddle(STUDENT_LIST* stuList, int pos, STUDENT* student) {
	if (MAX_STUDENT <= stuList->numOfStudents) {
		fprintf(stderr, "Error,too many students\n");
		return;
	}
	else {
		for (int i = stuList->numOfStudents - 1;i >= pos;i--) {
			stuList->list[i + 1] = stuList->list[i];
		}
		stuList->list[pos] = *student;
		stuList->numOfStudents += 1;
	}
}

void addStudentAtLast(STUDENT_LIST* stuList, STUDENT* student) {
	if (MAX_STUDENT <= stuList->numOfStudents) {
		fprintf(stderr, "Error, too many students\n");
	}
	else {
		stuList->list[stuList->numOfStudents] = *student;
		stuList->numOfStudents += 1;
	}
}

void deleteStudentAtStart(STUDENT_LIST* stuList) {
	int i = 0;
	if (stuList->numOfStudents > 0) {
		for (i = 0;i < stuList->numOfStudents - 1;i++) {
			stuList->list[i] = stuList->list[i + 1];
		}
		memset(&(stuList->list[stuList->numOfStudents - 1]), 0, sizeof(STUDENT));
		stuList->numOfStudents -= 1;
	}
	else {
		fprintf(stderr, "Error, there are no students\n");
		return;
	}
}

void deleteStudentAtMiddle(STUDENT_LIST* stuList, int pos) {
	int i = 0;
	if (stuList->numOfStudents <= pos) {
		fprintf(stderr, "Error, there are no students\n");
		return;
	}
	else {
		for (i = pos;i < stuList->numOfStudents - 1;i++) {
			stuList->list[i] = stuList->list[i + 1];
		}
		memset(&(stuList->list[stuList->numOfStudents - 1]), 0, sizeof(STUDENT));
		stuList->numOfStudents -= 1;
	}
}

void deleteStudentAtLast(STUDENT_LIST * stuList) {
	if (stuList->numOfStudents > 0) {
		memset(&(stuList->list[stuList->numOfStudents - 1]), 0, sizeof(STUDENT));
		stuList->numOfStudents -= 1;
	}
	else {
		fprintf(stderr, "Error, there are no students\n");
		return;
	}
}

void test1() {
	char buf;
	int sel;
	STUDENT_LIST stuList;
	STUDENT student;

	memset(&stuList, 0, sizeof(STUDENT_LIST));

	for (int i = 0; i < 3; i++) {
		printf("Input %d student info(name, age)\n", i + 1);
		scanf("%s%c%d", stuList.list[i].name, &buf, &(stuList.list[i].age));
		stuList.numOfStudents += 1;
	}

	printStudents(&stuList);

	printf("\nINput a student information at start\n");
	scanf("%s%c%d", student.name, &buf, &student.age);
	addStudentAtStart(&stuList, &student);
	printStudents(&stuList);

	printf("\nINput a student information at last\n");
	scanf("%s%c%d", student.name, &buf, &student.age);
	addStudentAtLast(&stuList, &student);
	printStudents(&stuList);

	printf("\nINput a student information at middle\n");
	scanf("%s%c%d", student.name, &buf, &student.age);
	addStudentAtMiddle(&stuList, 3, &student);
	printStudents(&stuList);

	printf("\nDelete a student information at start\n");
	getchar();
	deleteStudentAtStart(&stuList);
	printStudents(&stuList);

	printf("\nDelete a student information at last\n");
	getchar();
	deleteStudentAtLast(&stuList);
	printStudents(&stuList);

	printf("\nDelete a student information at Middle\n");
	getchar();
	deleteStudentAtMiddle(&stuList,1);
	printStudents(&stuList);
}

int main() {
	test1();
	return 0;
}
