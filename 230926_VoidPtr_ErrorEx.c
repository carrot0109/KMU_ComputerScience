#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func() {
	int num = 20;
	void* ptr = &num;
	printf("addrss of num : %p\n", &num, ptr);

	printf("before : num : %d\n", num);
	*ptr = 30;	// 타입정보가 없으므로 참조연산자 사용 불가능 --> error case
	*((int*)ptr) = 30;	// 형변환을 통해 타입형을 정해줌 --> correct case
	printf("after : num : %d\n", num);
}


int main() {
	test_func();

	return 0;
}
