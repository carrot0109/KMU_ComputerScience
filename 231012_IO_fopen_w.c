#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void ex_func() {
    FILE* fp = NULL;		// stream 생성
    fp = fopen("data.txt","w");
    fprintf(fp,"손흥민 202301 축구 좋아하는 숫자 %d", 7);  // 파일 입출력 함수 --> 메모장 생성과 문장 메모장에 입력
    // 내용을 바꿀 시 전에 있던 파일이 날아감
}

int main() {
	ex_func();
	return 0;
}
