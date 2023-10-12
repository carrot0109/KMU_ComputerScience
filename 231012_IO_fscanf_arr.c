#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int ex_func1() {
    int arr[5] = { 0, };

    FILE* fp = fopen("data1.txt", "rt");   

    if (fp == NULL) {
        printf("file open error");
        return -1;
    }
    
    for (int i = 0; i < 5; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    // fp 에 있는 숫자와 문장을 num과 name에 입력
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    
    fclose(fp);
}

int main() {
    ex_func1();
    return 0;
}
