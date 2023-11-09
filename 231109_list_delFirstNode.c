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
int Add_Node_Kth();
void test_Add_node_Kth();
void del_Node_Front();
void test_del_Node_Front();



int main()
{
	//test_add_node_front();
	//test_display();
	//test_add_node_rear();
	//test_Add_node_Kth();
	test_del_Node_Front();
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

int Add_Node_Kth(int k) {
	node* newNode, * curNode;
	int count = 0;

	printf("\n\n\n#### [%d]번째에 새로운 노드를 삽입하겠습니다.####\n", k);
	count = getNodeCount_ver_1();

	if (k<1 || k>count + 1) {
		printf("\n#### [%d]번째 노드는 삽입 할 수 없는 위치 입니다. ####\n", k);
		printf("\n#### 1 ~ %d번째 노드까지 삽입할 수 있습니다.####\n", count + 1);
		return 0;
	}

	newNode = (node*)malloc(sizeof(node));
	printf("[%d]번째 노드로 삽입 할 데이터를 입력하세요.\n", k);
	scanf("%d", &newNode->value);
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		printf("\n\n\t\tcase 1. %d번째 노드로 연결\n", k);
		return 1;
	}

	if (k == 1) {
		newNode->next = head;
		head = newNode;
		printf("\n\n\t\tcase 2. %d번째 노드로 연결\n", k);
		return 1;
	}

	curNode = head;
	for (int i = 1;i < k - 2;i++) {
		curNode = curNode->next;
	}

	newNode->next = curNode->next;
	newNode->next = curNode;
	printf("\n\n\t\tcase 3. %d번째 노드로 연결(마지막 노드까지 포함)\n", k);
	return 1;
}

void test_Add_node_Kth() {
	int result = 0;
	int k = 0;
	test_add_node_rear();

	printf("\n\n앞에서부터 몇 번째 노드를 삽입 하시겠습니까? ");
	scanf("%d", &k);
	result = Add_Node_Kth(k);
	if (result == 1) {
		printf("\n\n\t\t노드가 %d번째에 삽입 됐습니다.\n", k);
		display();
	}
	else
		printf("\n\n\t\t노드 삽입을 실패 했습니다.\n");
}

void del_Node_Front() {
	node* delNode;
	if (head == NULL) {
		printf("\n\n\t\t연결 리스트가 구서 되지 않아 삭제할 노드가 없습니다.\n");
		return;
	}

	delNode = head;
	head = head->next;
	// head = delNode->next;
	free(delNode);

	printf("\n\n\t\t첫 노드를 제거 했습니다.\n");
}

void test_del_Node_Front() {
	test_add_node_front();
	display();
	for (int i = 0;i < 1;i++) {
		printf("\n\t\t첫 노드 삭제 [%d]회 실행", i + 1);
		del_Node_Front();
	}
	printf("\n\n\t\t첫 노드를 제거 후 연결리스트는 다음과 같습니다.\n");
	display();
}




















