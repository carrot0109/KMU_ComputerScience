#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void input(int scores[][4]) {
	for (int i = 0; i < 3; i++) {
		printf("\nstudent %d\n", i + 1);
		for (int j = 0; j < 4; j++) {
			printf("subject %d : ", j + 1);
			scanf("%d", &scores[i][j]);
		}
	}
}

void average(int scores[][4], double* aver) {
	int avg = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			avg += scores[i][j];
		}
		aver[i] = avg / 4.0;
		avg = 0;
	}
}

void test_func() {
	int	scores[3][4] = { 0, };
	double aver[3] = { 0 };
	input(scores);
	average(scores, aver);
	
	for (int i = 0; i < 3; i++) {
		printf("\n\nstudent %d\n", i + 1);
		printf("total : %lf\n", aver[i] * 4);
		printf("avg : %lf\n", aver[i]);
	}
}


int main() {
	test_func();
	return;
}
