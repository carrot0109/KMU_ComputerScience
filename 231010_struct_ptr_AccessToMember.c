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
	struct score a[3] = {
		{70,70,70},
		{80,80,80},
		{90,90,90}
	};

	struct score* sp = a;	// a는 배열이므로 주소연산자 필요 없음
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("\n구조체 배열 a[%d]의 멤버접근\n", i);
		printf("%d  %d  %d  %d\n", a[i].kor, (*(sp + i)).kor, (sp + i)->kor, sp[i].kor);
		printf("%d  %d  %d  %d\n", a[i].eng, (*(sp + i)).eng, (sp + i)->eng, sp[i].eng);
		printf("%d  %d  %d  %d\n", a[i].mat, (*(sp + i)).mat, (sp + i)->mat, sp[i].mat);
	}
}

int main() {
	ex_func();
	return 0;
}
