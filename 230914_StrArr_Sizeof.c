	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void TestFunc() {
		char str1[6] = { 'a','n','g','e','l' };  // 문자 하나씩 초기화
		char str2[6] = "angel";      // 문자열 형태로 초기화
		char str3[] = "angel";       // 문자열 배열의 크기 생략 --> 알아서 6으로 지정

		printf("%s 배열의 크기는 %d\n", str1, sizeof(str1));
		printf("%s 배열의 크기는 %d\n", str2, sizeof(str2));
		printf("%s 배열의 크기는 %d\n", str3, sizeof(str3));
	}
	int main() {
		TestFunc();

		return 0;
	}
