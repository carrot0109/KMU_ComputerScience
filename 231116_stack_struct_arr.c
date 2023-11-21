#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE	10

typedef int element;

typedef struct _ARRAY_STACK_ {
	element stackArr[STACK_SIZE];
	int topIndex;
	int stacksize;
} ARRAY_STACK;

void init(ARRAY_STACK* stack, int size) {
	stack->stacksize = size;
	stack->topIndex = -1;
}

int isEmpty(ARRAY_STACK* stack) {
	if (stack->topIndex == -1) {
		return 1;		// TRUE
	}
	else {
		return 0;		// FALSE
	}
}

int isFull(ARRAY_STACK* stack) {
	if (stack->topIndex == STACK_SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

void push(ARRAY_STACK* stack, element item) {
	if (isFull(stack)) {
		printf("\n\tStack is Full!\n\n");
		return;
	}
	else {
		stack->stackArr[++(stack->topIndex)] = item;	// Increment topIndex then insert item
	}
}

element pop(ARRAY_STACK* stack) {
	if (isEmpty(stack)) {
		printf("\n\tStack is Empty!\n\n");
		exit(1);
	}
	else {
		return stack->stackArr[(stack->topIndex)--];	// Return data at topIndex then decrement it
	}
}

element peek(ARRAY_STACK* stack) {
	if (isEmpty(stack)) {
		printf("\n\tStack is Empty!\n\n");
		exit(1);
	}
	else {
		return stack->stackArr[stack->topIndex];		// Return data at topIndex
	}
}

void printStack(ARRAY_STACK* stack) {
	int cnt_i;

	if (isEmpty(stack)) {
		printf("\n스택이 비어있습니다.\n");
		return;
	}
	printf("[");
	for (cnt_i = 0; cnt_i <= stack->topIndex; cnt_i++) {
		printf("%d   ", stack->stackArr[cnt_i]);
	}
	printf("]\n");
}

void test1() {
	int cnt_i;
	element item;
	ARRAY_STACK stack;
	printf("\n * 순차 스택 연산 *\n");

	init(&stack, 10);
	printStack(&stack);

	for (cnt_i = 0; cnt_i < 10; cnt_i++) {
		push(&stack, cnt_i);
		printf("push ");
		printStack(&stack);
	}

	/* overflow test */
	push(&stack, cnt_i);
	printStack(&stack);

	item = peek(&stack);
	printStack(&stack);
	printf("peek => %d", item);

	for (cnt_i = 0; cnt_i < 10; cnt_i++) {
		item = pop(&stack);
		printStack(&stack);
		printf("pop => %d", item);
	}

	item = pop(&stack);
	printStack(&stack);
}

int main() {
	test1();
	return 0;
}

// EOF
