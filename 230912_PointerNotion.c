#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	// 포인터는 가르키는 것->대상이 매우 중요
	int a = 5;	

	// a를 가리킬 수 있는 정수형 포인터 변수 선언 필요
	int* ptr;	
	
	// 포인터는 주소값을 가르키고 그 주소값을 참조하여 값에 접근함	
	ptr = &a;	// 변수 a으 주소값을 포인터 ptr에 연결
	
	printf("address of a is %p\n", &a);
	printf("value of ptr is %p\n", ptr);	// ptr은 주소값을 가지기 때문에 결국 %p

	return 0;
}
