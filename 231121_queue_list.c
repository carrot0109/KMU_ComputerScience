#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

#define Q_SIZE 10

typedef int element;

typedef struct {
	element queue[Q_SIZE];
	int front, rear;
}QueueType;

QueueType* createQueue() {
	QueueType* Q;
	Q = (QueueType*)calloc(1, sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

int isFull(QueueType* Q) {
	if (Q->rear == Q_SIZE - 1) {
		printf("Queue is full!\n");
		return TRUE;
	}
	else
		return FALSE;
}

int isEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf("Queue is empty!\n");
		return TRUE;
	}
	else
		return FALSE;
}

void enQueue(QueueType* Q, element item) {
	if (isFull(Q)) {
		return;
	}
	else {
		(Q->rear)++;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(QueueType* Q) {
	if (isEmpty(Q)) {
		return;
	}
	else {
		(Q->front)++;
		return Q->queue[Q->front];
	}
}

element peek(QueueType* Q) {
	if (isEmpty(Q))
		return;
	else
		return Q->queue[Q->front + 1];
}

void printQ(QueueType* Q) {
	int i;
	printf("Queue: (front: %d, rear: %d)[", Q->front, Q->rear);
	for (i = Q->front + 1; i <= Q->rear; i++) {
		printf("%d, ", Q->queue[i]);
	}
	printf("]\n");
}

int main() {
	int i;
	QueueType* Q = createQueue();
	QueueType* Q2 = createQueue();
	element data;

	printf("[큐 삽입]\n");
	for (i = 0; i < 11; i++) {
		printf("%d 삽입\n", i);
		enQueue(Q, i);
		printQ(Q);
	}

	data = peek(Q);
	printf("\nFirst item in Queue: %d\n", data);

	printf("\n[큐 삭제]\n");
	for (i = 0; i < 11; i++) {
		data = deQueue(Q);
		printf("%d 삭제\n", data);
		printQ(Q);
	}

	printf("\n[거짓 포화]\n");
	for (i = 0; i < 11; i++) {
		printf("enQueue: ");
		enQueue(Q2, i);
		printQ(Q2);
		
		printf("deQueue: ");
		deQueue(Q2, i);
		printQ(Q2);
	}

	getchar();
	return 0;
}
