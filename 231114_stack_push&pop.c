#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <assert.h>

#define STACK_SIZE 100

typedef int element;

element stack[STACK_SIZE];
int top = -1;

void init() {
	top = -1;
}

int isEmpty() {
	if (top == -1)
		return -1;
	else
		return 0;
}

int isFull() {
	if (top == STACK_SIZE - 1)
		return 1;
	else 
		return 0;
}

void push(element item) {
	if (isFull()) {
		printf("\n\n Stack is FULL \n");
		return;
	}
	else
		stack[++top] = item;
}

element pop() {
	if (isEmpty()) {
		printf("\n\n Stack is Empty \n");
		return 0;
	}
	else
		return stack[top--];		// top의 원소를 삭제한 후 top 감소
}

element peek() {
	if (isEmpty()) {
		printf("\n\n Stack is Empty\n");
		exit(1);
	}
	else
		return stack[top];
}

void printStack() {
	for (int i = 0;i <= top;i++) {
		printf("\n[%d]번째 스택값은 [%d]입니다.",i, stack[i]);
	}
}

void exer1_stack_array() {
	element item;
	printf("\n** 순차 스택 연산 **\n");
	printStack();
	int i = 0;

	for (i = 0;i < 10;i++) {
		push(i);
		printStack();
	}

	push(i);
	printStack();

	item = peek();
	printStack();
	printf("peek => %d", item);

	for (i = 0;i < 10;i++) {
		item = pop();
		printStack();
		printf("\t pop => %d", item);
	}

	item = pop();
	printStack();

	getchar();
}

int main() {
	exer1_stack_array();
	return 0;
}
