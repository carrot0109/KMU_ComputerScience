#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void ex_func() {
    FILE* fp = NULL;
    fp = fopen("data.txt","w");
    fprintf(fp,"손흥민 202301 축구 좋아하는 숫자 %d", 7);  // 메모장 생성과 문장 메모장에 입력
}

int main() {
	ex_func();
	return 0;
}
