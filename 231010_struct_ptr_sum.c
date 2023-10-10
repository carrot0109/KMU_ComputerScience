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

void ex_func() {
	struct score a[3] = {
		{70,70,70,0},
		{80,80,80,0},
		{90,90,90,0}
	};

	struct score* ptr = a;
	for (int i = 0; i < 3; i++) {
		(ptr + i)->total = (ptr + i)->kor + (ptr + i)->eng + (ptr + i)->mat;
		printf("[%d]학생 : %d\n",i+1, (ptr + i)->total);
	}


}

int main() {
	ex_func();
	return 0;
}
