#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

struct score {
	int kor, eng, mat;
	int total;
};

void sum(struct score* sp) {
	for (int i = 0; i < 3; i++) {
		sp[i].total = sp[i].eng + sp[i].kor + sp[i].mat;
	}
}

void ex_func() {
	struct score a[3] = { 
		{70,70,70,0},
		{80,80,80,0},
		{90,90,90,0}
	};
	struct score* sp = a;
	sum(sp);
	for (int i = 0; i < 3; i++) {
		printf("[학생 %d]의 합 : %lf\n", i+1,(sp[i].total)/3.0);
	}
}

int main() {
	ex_func();
	return 0;
}
