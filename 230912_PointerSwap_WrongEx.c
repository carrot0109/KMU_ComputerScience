#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TestFunction(int num1, int num2) {		
	int tmp = 0;
	
	tmp = num1;
	num1 = num2;
	num2 = tmp;

	return 0;
}

int main() {
	int a = 5;
	int b = 10;
	printf("a = %d\nb = %d\n", a, b);

	TestFunction(a, b);

	printf("\n스왑 후\n\n");
	printf("a = %d\nb = %d\n", a, b);

	// 결과적으로는 값은 바뀌지 않음
	// 전달인자가 임시공간에 생성된 매개변수에 복사되기 때문에 호출된 함수 내부에서 값을 변경하더라도 원본값은 바뀌지 않음



	return 0;
}
