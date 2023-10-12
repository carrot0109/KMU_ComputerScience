#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int ex_func1() {
    FILE* fp = NULL;
    fp = fopen("c:\\data.txt", "r");
    if (fp == NULL) {
        printf("file open error");
        return -1;
    }
    fprintf(fp, "file IO tesst");
    fclose(fp);
}

void ex_func2() {
    FILE* fp = NULL;
    fp = fopen("c:\\data.txt", "r");
    if (fp == NULL) {
        printf("file open error");      // void 형이기에 return 을 안해주면 끝이 나지 않고 함수 계속 실행 --> fprintf 불가 --> 에러 발생
        // return -1;
        exit(1);                        // 따라서 c프로그램을 강제 종료해주는 exit를 활용하여 fprintf 전에 끝냄
    }
    fprintf(fp, "file IO tesst");
    fclose(fp);
}

int main() {
    ex_func1();
    ex_func2();
    return 0;
}
