#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int addmat[3][3];
    int submat[3][3];
    int mulmat[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            addmat[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            submat[i][j] = A[i][j] - B[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mulmat[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                mulmat[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("행렬 A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n행렬 B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n덧셈 결과:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", addmat[i][j]);
        }
        printf("\n");
    }

    printf("\n뺄셈 결과:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", submat[i][j]);
        }
        printf("\n");
    }

    printf("\n곱셈 결과:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mulmat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
