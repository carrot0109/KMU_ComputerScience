#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int ex_func1() {
    int num = 202301;
    char name[10] = "손흥민";

    FILE* fp = fopen("student.txt", "w");   

    if (fp == NULL) {
        printf("file open error");
        return -1;
    }
    
    fprintf(fp, "%d %s", num, name);    // fprintf : 자료형에 따라 자료를 파일로 출력하는 함수
    fclose(fp);
}

int main() {
    ex_func1();
    return 0;
}
