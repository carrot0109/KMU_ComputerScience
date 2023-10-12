#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

void ex_func() {
    FILE* fp = NULL;
    fp = fopen("data.txt","a");
    fprintf(fp,"파이리 날아감");
    // 개방모드를 a로 변경함으로써 전에 있던 파일이 날아가지 않고 덧붙여짐
}

int main() {
	ex_func();
	return 0;
}
