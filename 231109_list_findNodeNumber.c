#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <assert.h>


typedef struct Node {
	int value;
	struct Node* next;
}node;

node* head = NULL;

void Add_node_front(int count);
void test_add_node_front();
void display();
void test_display();
void Add_node_rear(int count);
void test_add_node_rear();
int getNodeCount_ver_1();
int getNodeCount_ver_2();



int main()
{
	//test_add_node_front();
	test_display();
	//test_add_node_rear();
}



void Add_node_front(int count)
{
	node* newNode = (node*)malloc(sizeof(node)); //노드 생성
	printf("\n\n[%d]번째 노드의 값을 입력하세요 :  ", count);
	scanf("%d", &newNode->value);
	newNode->next = NULL;

	if (head == NULL) //아직 연결 된 노드가 없다면???
	{
		head = newNode;//새로 생성된 노드의 주소를 head에 저장
		printf("####노드 맨 앞 삽입 : 첫 노드로 연결####\n");
		return; //함수 종료
	}

	//맨 앞에 노드를 추가
	newNode->next = head;
	head = newNode;
	printf("####노드 맨 앞 삽입 : 일반적인 경우####\n");
}

void display()
{
	node* curNode; //방문 노드의 주소를 저장하는 포인터(8바이트)

	if (head == NULL) //아직 연결 된 노드가 없다면???
	{
		printf("\n####연결리스트가 구성 되지 않아 출력 할 노드가 없습니다.####\n");
		return;
	}
	printf("\n\nSingly Linked List Display : ");

	//head포인터 : 첫 노드의 주소를 저장하는 포인터
	curNode = head; //첫 노드의 주소를 저장
	while (curNode->next != NULL) //방문한 노드의 다음 노드가 있다면? 반복! 
		//마지막 노드는 포함 되지 않는다.
	{
		printf("%d => ", curNode->value);
		curNode = curNode->next;
	}
	printf("%d\n", curNode->value); //마지막 노드를 출력
}

void Add_node_rear(int count)
{
	node* curNode;
	node* newNode = (node*)malloc(sizeof(node)); //구조체 변수 선언(노드 생성)
	printf("\n\n[%d]번째 노드의 값을 입력하세요 :  ", count);
	scanf("%d", &newNode->value); // 7입력
	newNode->next = NULL;

	if (head == NULL) //연결리스트가 구성 되지 않은 상태??
	{
		head = newNode; //새로 생성된 노드를 head로 설정
		printf("####노드 맨 뒤 삽입 : 첫 노드로 연결####\n");
		return;
	}

	curNode = head;
	while (curNode->next != NULL) //방문한 노드의 다음 노드가 있다면??? 
	{
		curNode = curNode->next; //다음 노드로 이동
	}

	curNode->next = newNode; //마지막 노드에 새로 생성된 노드를 연결
	printf("####노드 맨 뒤 삽입 : 일반적인 경우 순회한 뒤 삽입####\n");
}

void test_add_node_front()
{
	int NumNode;
	int i;
	printf("생성될 노드의 수를 적으시오\n");
	scanf("%d", &NumNode);

	printf("노드 %d개 생성\n", NumNode);
	for (i = 0; i < NumNode; i++)
		Add_node_front(i);

}

void test_display()
{
	test_add_node_front();
	//test_add_node_rear();
	display();
	int count1 = getNodeCount_ver_1();
	printf("\n노드의 갯수 ver1 : %d\n", count1);
	int count2 = getNodeCount_ver_2();
	printf("\n노드의 갯수 ver2 : %d\n", count2);
}


void test_add_node_rear()
{
	int NumNode;
	int i;
	printf("생성될 노드의 수를 적으시오\n");
	scanf("%d", &NumNode);

	printf("노드 %d개 생성\n", NumNode);
	for (i = 0; i < NumNode; i++)
		Add_node_rear(i);

	display();
}

int getNodeCount_ver_1() {
	int count = 0;
	node* curNode;
	if (head == NULL) {
		return 0;
	}

	curNode = head;
	while (curNode->next != NULL) {
		++count;
		curNode = curNode->next;
	}
	return count + 1;
}

int getNodeCount_ver_2() {
	int count = 0;
	node* curNode;
	if (head == NULL) {
		return 0;
	}

	curNode = head;
	while (curNode != NULL) {
		++count;
		curNode = curNode->next;
	}
	return count;
}
