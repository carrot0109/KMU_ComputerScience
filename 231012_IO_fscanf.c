#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int ex_func1() {
    int num;
    char name[10];

    FILE* fp = fopen("student.txt", "r");   

    if (fp == NULL) {
        printf("file open error");
        return -1;
    }
    
    fscanf(fp, "%d %s", &num, name);    // fscanf : 자료형에 따라 자료를 읽어들이는 입력함수
    // fp 에 있는 숫자와 문장을 num과 name에 입력
    printf("%d %s\n", num, name);       
    
    fclose(fp);
}

int main() {
    ex_func1();
    return 0;
}
