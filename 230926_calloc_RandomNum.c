#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomGen(int* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // 랜덤한 값을 할당
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int getSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    printf("정수 배열의 크기를 입력하세요: ");
    scanf("%d", &size);

    int* arr = (int*)calloc(size, sizeof(int));

    if (arr == NULL) {
        printf("메모리 할당 오류\n");  // 오류체크
        return 1;
    }

    RandomGen(arr, size);

    printf("배열의 값: ");
    printArray(arr, size);

    int sum = getSum(arr, size);
    printf("배열의 합: %d\n", sum);

    free(arr);

    return 0;
}
