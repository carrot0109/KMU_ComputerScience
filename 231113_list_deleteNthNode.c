
/*============================
*  제출기간 : 11월 19일 까지
* ============================*/
/* ========================
 *  작성자 : 유근오
 *  학  번 : 20232093
 * ======================== */

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

/*===============================
*  이미 구현되어 있는 함수입니다.
*  필요한 함수를 호출해 사용하세요.
* ================================*/
int getNodeCount_ver_1(); //전체노드수구하기
void Add_node_front(int count);//첫번째노드로삽입
void display();//전체노드출력
void Add_node_rear(int count);//마지막노드로삽입
//================================//

int del_Node_Kth(int k);
void Test_del_Node_Kth();
node* search_Node(int target);
void Test_search_Node();




int main()
{
	//Test_del_Node_Kth();
	Test_search_Node();
}


/* ====================================================================
								 HW-1
=======================================================================
1. 앞에서부터 K번째 노드 삭제 함수 구현하기
	 - Tip : '앞에서부터 K번째 노드 삽입 함수’를 변형하여 구현
		  - case 1. head 가 NULL 인 경우
				   - 삭제실패 -> return 0;
		  - case 2. k == 1 인 경우 -> head가 변경되어야 하기 때문
				   - 삭제성공 -> return 1;
		  - case 3. 일반적인 경우 -> 중간노드 제거 -> 순회
				   - 삭제성공 -> return 1;
	  - 3가지 case에 맞게 구현

2. 기반 코드 및 test 함수가 구현된 소스코드를 제공해 드림
3. 제공된 코드에서 구현 및 test
4. test 실행 결과 창을 캡쳐하여 소스코드와 같이 제출
   - 성공인 경우와 실패인 경우
==========================================================================*/

/* k번째 노드 삭제 */
int del_Node_Kth(int k)
{

	node* delNode;
	node* curNode;
	int i;
	int count = 0;

	count = getNodeCount_ver_1(); //노드의 개수를 구해 리턴하는 함수

	if (k < 1 || k > count + 1)
	{
		printf("\n#### [%d]번째 노드는 삭제 할 수 없는 위치 입니다.####\n", k);
		printf("\n#### 1 ~ %d번째 노드까지 삭제할 수 있습니다.####\n", count + 1);
		return 0; //삭제 실패
	}

	if (head == NULL) {
		printf("연결 리스트가 구성 되지 않아 삭제할 노드가 없습니다.\n");
		return 0;
	}

	if (k == 1) {
		delNode = head;
		head = head->next;
		free(delNode);
		return 1;
	}

	else {
		curNode = head;
		for (int i = 0; i < k - 2 ; i++) {
			curNode = curNode->next;
		}
		delNode = curNode->next;
		curNode->next = curNode->next->next;
		free(delNode);
		return 1;
	}
}
/* k번째 노드 삭제 Test */
void Test_del_Node_Kth()
{
	int k_order;
	int result = 0;

	for (int i = 1; i <= 10; i++) {
		Add_node_rear(i);
	}

	printf("\n\t 삭제할 노드는 몇 번째 입니까?");
	scanf("%d", &k_order);

	//del_Node_Kth 함수 : 삭제 성공 시 반환값 1, 삭제 실패 시 반환값 0
	result = del_Node_Kth(k_order);

	if (result == 1)
		printf("\n\t [%d]번째 노드를 삭제하였습니다.\n", k_order);
	else
		printf("\n\t 삭제를 실패하였습니다.\n");
	printf("\n[삭제 후]");
	display();
}

/* ====================================================================
								 HW-2
=======================================================================
1.  노드 검색 함수 구현하기
	 -  Target  값이 주어졌을 때
	 -  순회하면서 노드의 데이터가 Target 값과 같은지 체크
	 -  Traget 값과 같은 노드가 있다면 그 노드의 주소를 return
	 -  없다면 NULL 을 return

2. 기반 코드 및 test 함수가 구현된 소스코드를 제공해 드림
3. 제공된 코드에서 구현 및 test
4. test 실행 결과 창을 캡쳐하여 소스코드와 같이 제출
==========================================================================*/

/* 노드 검색 */
node* search_Node(int target) //노드의 주소 값을 반환
{
	node* curNode;
	if (head == NULL)
	{
		printf("\n\t 연결리스트가 구성되어 있지 않습니다.\n");
		return NULL;
	}

	if (target != 0) {
		curNode = head;
		while (curNode->value != target) {
			curNode = curNode->next;
		}
		return curNode;
	}

	return NULL; //검색한 값이 없는 경우
}
/* 노드 검색Test */
void Test_search_Node()
{
	int target = 0;
	node* resultNode;

	for (int i = 1; i <= 10; i++) {
		Add_node_rear(i);
	}

	display(); // 생성된 노드 출력

	printf("\n\n검색할 정수를 입력하시오. : ");
	scanf("%d", &target);

	//노드 검색 함수 : 검색 노드가 있다면 검색 노드의 주소를 반환, 검색 노드가 없다면 NULL을 반환
	resultNode = search_Node(target);

	if (resultNode == NULL)
		printf("\n\t연결리스트에 Target [%d]와 일치하는 노드는 존재하지 않습니다.\n");
	else
		printf("\n\tTarget [%d]와 일치하는 노드의 주소는 [%p]입니다.\n", target, resultNode);
	printf("\n[일치 노드 주소의 값 확인] : %d", resultNode->value);
}

/* 전체 노드의 수 구하기 */
int getNodeCount_ver_1()
{
	int count = 0;
	node* curNode;
	if (head == NULL)
		return 0;

	curNode = head;
	while (curNode->next != NULL)
	{
		++count; //개수를 증가 
		curNode = curNode->next;
	}
	return (count + 1);
}

/* 맨앞으로 노드 추가 */
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

/* 맨뒤로 노드 추가*/
void Add_node_rear(int count)
{
	node* curNode;
	node* newNode = (node*)malloc(sizeof(node)); //구조체 변수 선언(노드 생성)
	printf("\n\n[%d]번째 노드의 값을 입력하세요 :  ", count);
	scanf("%d", &newNode->value);
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

/* 전체 노드 출력 */
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
