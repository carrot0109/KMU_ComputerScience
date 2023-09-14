#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 배열은 인덱스만 잘 관리하면 많은 변수를 한번에 관리, 또는 반복문을 이용해서 관리하면 편함

int main() {
	int a[10];		// 정수형 배열 선언과 동시에 초기값 설정이 가능 ex) a[10] = {1,2,3,4,5,6,7,8,9,10}
	// int a[] = {1,2,3,4,5,6,7,8,9,10}; --> 숫자 생략가능. 자동으로 저장공간이 잡힘
	// int a[10] = {0,}; --> 정수형 배열 선언과 동시에 초기값을 0 으로 설정 / 초기값을 설정하지 않을 시 쓰레기값 저장
	// int a[4] = {1,2,3,4,5}; --> 배열 요소의 수보다 초기값이 더 많은 에러 발생 (buffer overflow)
	
	int  i = 0;

	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("\na[%d] = %d", i, a[i]);
	}

	return 0;
}
