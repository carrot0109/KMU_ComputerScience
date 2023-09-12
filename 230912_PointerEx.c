#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int a = 10;			int* a_ptr;
	double b = 12.4;	double* b_ptr;
	char c = 'h';		char* c_ptr;

	a_ptr = &a;		b_ptr = &b;		c_ptr = &c;

	printf("address of a is %p\n", &a);		// a의 주소값
	printf("address of b is %p\n", &b);
	printf("address of c is %p\n", &c);

	printf("\n\n");

	printf("value of a_ptr is %p\n", a_ptr);	// a의 주소값을 가리키는 a_ptr의 값
	printf("value of b_ptr is %p\n", b_ptr);
	printf("value of c_ptr is %p\n", c_ptr);

	printf("\n\n");

	printf("value of *a_ptr is %d\n", *a_ptr);	// a_ptr이 가리키는 주소에 담겨있는 a의 값
	printf("value of *b_ptr is %lf\n", *b_ptr);
	printf("value of *c_ptr is %c\n", *c_ptr);

	return 0;
}
