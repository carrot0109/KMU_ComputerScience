#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int ex_func1() {
    int arr[5] = { 0, };

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    FILE* fp = fopen("data1.txt", "wt");   

    if (fp == NULL) {
        printf("file open error");
        return -1;
    }
    
    for (int i = 0; i < 5; i++) {
        fprintf(fp,"%d ", arr[i]);
    }
    
    fclose(fp);
}

int main() {
    ex_func1();
    return 0;
}
