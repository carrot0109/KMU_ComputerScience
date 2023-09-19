#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_func() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	printf("%p\n", arr);			// (배열 이름은 주소를 가리키니) arr의 주소			 : 0085FAA4
	printf("%p\n", &arr[0]);		// arr[0]의 주소									 : 0085FAA4
	printf("%d\n", *arr);			// (arr의 주소는 arr[0]의 주소와 같으니) arr[0]의 값 : 1
	printf("%p\n", &arr);			// arr의 주소										 : 0085FAA4
}

int main() {
	test_func();

	return 0;
}
