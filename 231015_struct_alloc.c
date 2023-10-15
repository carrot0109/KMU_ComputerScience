#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct STUDENT_ {
	char name[32];
	int number;
	double height;
} STUDENT;

void inputStudent(STUDENT* stu, int size) {
	for (int i = 0; i < size; i++) {
		printf("\nstudent %d\n", i + 1);
		printf("name : ");
		fgets(stu[i].name,sizeof(stu[i].name), stdin);

		printf("number : ");
		scanf("%d", &(stu[i].number));
		
		printf("height : ");
		fscanf(stdin, "%lf", &(stu[i].height));	// scanf("%lf", &(stu[i].number));
		// The key is a double-type factor, so fgets receiving the string cannot be used
		getchar();
	}
}

void printStudent(STUDENT* stu, int size) {
	for (int i = 0; i < size; i++) {
		printf("\nstudent %d\n", i + 1);
		printf("name : %s\n", stu[i].name);
		printf("number : %d\n", stu[i].number);
		printf("height : %lf\n", stu[i].height);
	}
}

void ex_func() {
	int size;
	printf("How many student information will you enter? : ");
	scanf("%d", &size);
	getchar();

	STUDENT* list;
	list = (STUDENT*)malloc(size * sizeof(STUDENT));

	if (list == NULL) {
		printf("fail");
		return;
	}

	inputStudent(list, size);
	printStudent(list, size);
}

int main() {
	ex_func();
	return 0;
}
