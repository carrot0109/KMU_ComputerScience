#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define TRUE 1 
#define FALSE 0

#define Q_SIZE 10


typedef int element; //큐 원소의 자료형을 int로 정의
typedef struct _QueueType {
	element queue[Q_SIZE];
	int front; // 삭제를 위한 위치 변수
	int rear;  // 삽입을 위한 위치 변수
	int count;
}QueueType;

void test_2();
void C2_printQ(QueueType* CQ);
element C2_peek(QueueType* CQ);
element C2_deQueue(QueueType* CQ);
void C2_enQueue(QueueType* CQ, element item);
int C2_isEmpty(QueueType* CQ);
int C2_isFull(QueueType* CQ);
QueueType* C2_createQueue();

QueueType* C2_createQueue()
{
	QueueType* CQ;
	CQ = (QueueType*)calloc(1, sizeof(QueueType));
	CQ->front = -1; // front 초기설정
	CQ->rear = -1; // rear 초기설정
	CQ->count = 0;
	return CQ;
}

int C2_isFull(QueueType* CQ)
{
	if (CQ->count == Q_SIZE)
	{
		printf("\n\t\tCircular Queue is full\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int C2_isEmpty(QueueType* CQ)
{
	if (CQ->count == 0)
	{
		printf("\n\t\tCircular Queue is empty\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/* 원형 큐의 rear에 원소 삽입 */
void C2_enQueue(QueueType* CQ, element item)
{
	if (C2_isFull(CQ))//overflow 검사
	{
		return;
	}
	else
	{
		CQ->rear = (CQ->rear + 1) % Q_SIZE; //나머지 연산 사용
		printf("Circular Queue의 [%d]번째 자리에 데이터 [%d]를 삽입합니다.", CQ->rear, item);
		CQ->queue[CQ->rear] = item;
		CQ->count++;
	}
}

/* 원형 큐의 front에 원소 삭제 */
element C2_deQueue(QueueType* CQ)
{
	if (C2_isEmpty(CQ))//underflow 검사
	{
		return 0;
	}
	else
	{
		CQ->front = (CQ->front + 1) % Q_SIZE;
		printf("Queue의 [%d]번째 자리에 데이터 [%d]를 삭제합니다.", (CQ->front), CQ->queue[CQ->front]);
		CQ->count--;
		return CQ->queue[CQ->front];
	}
}

element C2_peek(QueueType* CQ)
{
	if (C2_isEmpty(CQ))//underflow 체크
	{
		return 0;
	}
	else
	{
		return CQ->queue[(CQ->front + 1)%Q_SIZE];
	}
}

void C2_printQ(QueueType* CQ)
{
	int i;
	int first, last;
	printf("\n----------------------------------------------------------");
	printf("\nQueue 위치정보 front[%d], rear[%d] ", CQ->front, CQ->rear);
	printf("\nQueue 데이터정보 [");

	first = (CQ->front + 1) % Q_SIZE;
	last = (CQ->rear + 1) % Q_SIZE;
	i = CQ->count;

	while (i != 0) {
		printf("%d ,", CQ->queue[first]);
		first = (first + 1) % Q_SIZE;
		i--;
	}

	printf("]\n");
	printf("----------------------------------------------------------\n");
}

void test_2()
{
	int cnt_i;
	QueueType* CQ = C2_createQueue();  // 큐생성
	QueueType* CQ2 = C2_createQueue(); // 큐생성
	element data;

	printf("[원형큐 Enqueue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		C2_enQueue(CQ, cnt_i);
		C2_printQ(CQ);
		getchar();
	}

	data = C2_peek(CQ);
	printf("\n[peek] \nFirst item in Queue : [%d]\n", data);
	getchar();

	printf("[원형큐 dequeue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		data = C2_deQueue(CQ);
		C2_printQ(CQ);
		getchar();
	}

	printf("[거짓포화 TEST]\n");
	// STEP-1: Q2를 포화상태 만들기
	printf("STEP-1 : 포화상태 만들기\n");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		C2_enQueue(CQ2, cnt_i);
		printf("\n");
	}
	//getchar();
	// STEP-2: 삭제 후 포화여부 확인 
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		data = C2_deQueue(CQ2); //삭제
		C2_printQ(CQ2);

		printf("----------------------------------------------------------\n");
		C2_enQueue(CQ2, cnt_i + 770); //포화여부 확인
		C2_printQ(CQ2);
		getchar();
	}

	getchar();
}

int main() {
	test_2();
	return 0;
}
