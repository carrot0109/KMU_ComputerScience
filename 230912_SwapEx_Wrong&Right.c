#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int call_fnc1(int num1) {
	num1 = 20;
	return 0;
}

int call_fnc2(int num1) {
	num1 = 20;
	return num1;
}

void call_fnc4(int* num1) {
	*num1 = 20;
}

void call_fnc3(int num1) {
	num1 = 20;
}

int main() {
	int a = 5;
	printf("a = %d\n", a);

	a = 5;	call_fnc1(a);		printf("fnc_1 실행 후 a = %d\n", a);	// 포인터를 사용하지 않았으므로 안바뀜
	a = 5;	call_fnc2(a);		printf("fnc_2 실행 후 a = %d\n", a);	// 반환값과 상관없기 때문에 안바뀜
	a = 5;	a = call_fnc2(a);	printf("fnc_2 실행 후 a = %d\n", a);	// 반한값을 직접 a에 대입시켰기 때문에 바뀜
	a = 5;	call_fnc3(a);		printf("fnc_3 실행 후 a = %d\n", a);	// 인자 전달 시 주소값을 전달하지 않았기 때문에 안바뀜
	a = 5;	call_fnc4(&a);		printf("fnc_4 실행 후 a = %d\n", a);	// 주소값을 전달해주고, 포인터로 인자를 받았기 떄문에 바뀜

	return 0;
}
