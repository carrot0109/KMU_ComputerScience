#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1 
#define FALSE 0

#define Q_SIZE 10


typedef int element; //큐 원소의 자료형을 int로 정의
typedef struct _QueueType {
	element queue[Q_SIZE];
	int front; // 삭제를 위한 위치 변수
	int rear;  // 삽입을 위한 위치 변수
}QueueType;

/***************************************/
/***********   순차 큐 함수   **********/
/***************************************/
void test_0();
void printQ(QueueType* Q);
element peek(QueueType* Q);
element deQueue(QueueType* Q);
void enQueue(QueueType* Q, element item);
int isEmpty(QueueType* Q);
int isFull(QueueType* Q);
QueueType* createQueue();
/***************************************/

/***************************************/
/***********   원형 큐 함수   **********/
/***************************************/
void test_1();
void C1_printQ(QueueType* CQ);
element C1_peek(QueueType* CQ);
element C1_deQueue(QueueType* CQ);
void C1_enQueue(QueueType* CQ, element item);
int C1_isEmpty(QueueType* CQ);
int C1_isFull(QueueType* CQ);
QueueType* C1_createQueue();
/***************************************/

int main()
{
	//test_0(); //순차적 큐 test
	test_1(); //원형 큐 test
}


/***************************************
******** 배열을 이용한 Queue ***********
********     순차적 Queue    ***********
****************************************/
QueueType* createQueue()
{
	QueueType* Q;
	Q = (QueueType*)calloc(1, sizeof(QueueType));
	Q->front = -1; // front 초기설정
	Q->rear = -1; // rear 초기설정
	return Q;
}
int isFull(QueueType* Q)
{
	if (Q->rear == (Q_SIZE - 1))
	{
		printf("\n\t\tQueue is full\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int isEmpty(QueueType* Q)
{
	if (Q->rear == Q->front)
	{
		printf("\n\t\tQueue is empty\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/* 순차 큐의 rear에 원소 삽입 */
void enQueue(QueueType* Q, element item)
{
	if (isFull(Q))//overflow 검사
	{
		return;
	}
	else
	{
		printf("Queue의 [%d]번째 자리에 데이터 [%d]를 삽입합니다.", (Q->rear) + 1, item);
		Q->rear++;
		Q->queue[Q->rear] = item;
	}
}

/* 순차 큐의 front에 원소 삭제 */
element deQueue(QueueType* Q)
{
	if (isEmpty(Q))//underflow 검사
	{
		return 0;
	}
	else
	{
		Q->front++;
		printf("Queue의 [%d]번째 자리에 데이터 [%d]를 삭제합니다.", (Q->front), Q->queue[Q->front]);
		return Q->queue[Q->front];
	}
}

element peek(QueueType* Q)
{
	if (isEmpty(Q))//underflow 체크
	{
		return 0;
	}
	else
	{
		return Q->queue[Q->front + 1];
	}
}

void printQ(QueueType* Q)
{
	int i;
	printf("\n--------------------------------------------------");
	printf("\nQueue 위치정보 front[%d], rear[%d] ", Q->front, Q->rear);
	printf("\nQueue 데이터정보 [");
	for (i = Q->front + 1; i <= Q->rear; i++)
	{
		printf("%d, ", Q->queue[i]);
	}
	printf("]\n");
	printf("--------------------------------------------------\n");
}

void test_0()
{
	int cnt_i;
	QueueType* Q = createQueue();  // 큐생성
	QueueType* Q2 = createQueue(); // 큐생성
	element data;

	printf("[순차큐 Enqueue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n--------------------------------------------------\n");
		enQueue(Q, cnt_i);
		printQ(Q);
		getchar();
	}

	data = peek(Q);
	printf("\n[peek] \nFirst item in Queue : [%d]\n", data);
	getchar();

	printf("[순차큐 Eequeue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n--------------------------------------------------\n");
		data = deQueue(Q);
		printQ(Q);
		getchar();
	}

	printf("[거짓포화 TEST]\n");
	// STEP-1: Q2를 포화상태 만들기
	printf("STEP-1 : 포화상태 만들기\n");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		enQueue(Q2, cnt_i);
		printf("\n");
	}
	getchar();
	// STEP-2: 삭제 후 포화여부 확인 
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n--------------------------------------------------\n");
		data = deQueue(Q2); //삭제
		printQ(Q2);

		enQueue(Q2, cnt_i); //포화여부 확인
		getchar();
	}
}



/***************************************
******** 배열을 이용한 Queue ***********
********  원형 Queue CASE.1  ***********
****************************************/
QueueType* C1_createQueue()
{
	QueueType* CQ;
	CQ = (QueueType*)calloc(1, sizeof(QueueType));
	CQ->front = 0; // front 초기설정
	CQ->rear = 0; // rear 초기설정
	return CQ;
}

int C1_isFull(QueueType* CQ)
{
	if (((CQ->rear + 1) % Q_SIZE) == CQ->front)
	{
		printf("\n\t\tCircular Queue is full\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int C1_isEmpty(QueueType* CQ)
{
	if (CQ->rear == CQ->front)
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
void C1_enQueue(QueueType* CQ, element item)
{
	if (C1_isFull(CQ))//overflow 검사
	{
		return;
	}
	else
	{
		CQ->rear = (CQ->rear + 1) % Q_SIZE; //나머지 연산 사용
		printf("Circular Queue의 [%d]번째 자리에 데이터 [%d]를 삽입합니다.", CQ->rear, item);
		CQ->queue[CQ->rear] = item;
	}
}

/* 원형 큐의 front에 원소 삭제 */
element C1_deQueue(QueueType* CQ)
{
	if (C1_isEmpty(CQ))//underflow 검사
	{
		return 0;
	}
	else
	{
		CQ->front = (CQ->front + 1) % Q_SIZE;
		printf("Queue의 [%d]번째 자리에 데이터 [%d]를 삭제합니다.", (CQ->front), CQ->queue[CQ->front]);
		return CQ->queue[CQ->front];
	}
}

element C1_peek(QueueType* CQ)
{
	if (C1_isEmpty(CQ))//underflow 체크
	{
		return 0;
	}
	else
	{
		return CQ->queue[CQ->front + 1];
	}
}

void C1_printQ(QueueType* CQ)
{
	int i;
	int first, last;
	printf("\n----------------------------------------------------------");
	printf("\nQueue 위치정보 front[%d], rear[%d] ", CQ->front, CQ->rear);
	printf("\nQueue 데이터정보 [");

	first = (CQ->front + 1) % Q_SIZE;
	last = (CQ->rear + 1) % Q_SIZE;
	while (first != last) {
		printf("%d ,",CQ->queue[first]);
		first = (first + 1) % Q_SIZE;
	}

	printf("]\n");
	printf("----------------------------------------------------------\n");
}

void test_1()
{
	int cnt_i;
	QueueType* CQ = C1_createQueue();  // 큐생성
	QueueType* CQ2 = C1_createQueue(); // 큐생성
	element data;

	printf("[원형큐 Enqueue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		C1_enQueue(CQ, cnt_i);
		C1_printQ(CQ);
		getchar();
	}

	data = peek(CQ);
	printf("\n[peek] \nFirst item in Queue : [%d]\n", data);
	getchar();

	printf("[원형큐 dequeue TEST]");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		data = C1_deQueue(CQ);
		C1_printQ(CQ);
		getchar();
	}

	printf("[거짓포화 TEST]\n");
	// STEP-1: Q2를 포화상태 만들기
	printf("STEP-1 : 포화상태 만들기\n");
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		C1_enQueue(CQ2, cnt_i);
		printf("\n");
	}
	//getchar();
	// STEP-2: 삭제 후 포화여부 확인 
	for (cnt_i = 0; cnt_i < 11; cnt_i++)
	{
		printf("\n----------------------------------------------------------\n");
		data = C1_deQueue(CQ2); //삭제
		C1_printQ(CQ2);

		printf("----------------------------------------------------------\n");
		C1_enQueue(CQ2, cnt_i + 770); //포화여부 확인
		C1_printQ(CQ2);
		getchar();
	}

	getchar();
}
