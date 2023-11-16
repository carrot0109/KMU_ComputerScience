
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE	10

typedef int element;

element stack[STACK_SIZE];
int top = -1;

void init()
{
	top = -1;
}

int inEmpty()
{
	if (top == -1)
	{
		return 1;		// TRUE
	}
	else
	{
		return 0;		// FALSE
	}
}

int isFull()
{
	if (top == STACK_SIZE - 1) {
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(element item)
{
	if (isFull())
	{
		printf("\n\tStack is Full!\n\n");
		return;
	}
	else
	{
		stack[++top] = item;		// top의 값을 증가시킨 후 현재 top에 원소 삽입
	}
}

element pop()
{
	if (inEmpty())
	{
		printf("\n\tStack is Empty!\n\n");
		exit(1);
	}
	else
	{
		return stack[top--];		// 현재 top위치의 데이터를 반환한 후에, top의 값을 감소
	}
}

element peek()
{
	if (inEmpty())
	{
		printf("\n\tStack is Empty!\n\n");
		exit(1);
	}
	else
	{
		return stack[top];		// 현재 top위치의 데이터를 반환한 후에도, top의 값을 유지
	}
}

void printStack()
{
	int cnt_i;

	if (inEmpty())
	{
		printf("\n스택이 비어있습니다.\n");
		return;
	}
	printf("[");
	for (cnt_i = 0; cnt_i <= top; cnt_i++)
	{
		printf("%d   ", stack[cnt_i]);
	}
	printf("]\n");
}

void test1()
{
	int cnt_i;
	element item;

	printStack();

	for (cnt_i = 0; cnt_i < 10; cnt_i++)
	{
		push(cnt_i);
		printf("push ");
		printStack();
	}
	//getchar();

	/* overflow test */
	push(cnt_i);
	//getchar();

	for (cnt_i = 0; cnt_i < 10; cnt_i++)
	{
		printf("pop ");
		printf("%d ", pop());
		printStack();
	}

	/* underflow test */
	printf("%d ", pop());
	getchar();
}

int main()
{
	test1();
	getchar();
	return 0;
}

// EOF
