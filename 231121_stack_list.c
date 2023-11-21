
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int element;
//////////////////////////////////////////////////////////
/* 연결리스트를 이용한 stack - 노드구조체 정의*/        //
//////////////////////////////////////////////////////////
typedef struct _stackNode_                              //
{                                                       //
    element data;                                       //
    struct _stackNode_* link;                           //
}stackNode;                                             //
//
stackNode* top;//연결리스트에서 head 같은 존재          //
//////////////////////////////////////////////////////////
/* 연결리스트를 이용한 stack - 함수선언 */              //
//////////////////////////////////////////////////////////
void linked_init();                                     //
int linked_isEmpty();                                   //
void linked_push(element item);                         //
element linked_pop();                                   //
element linked_peek();                                  //
void freeStack();                                       //
void test2();                                           //
//////////////////////////////////////////////////////////





int main()
{
    test2(); // 연결리스트릴 이용한 스택 test
    return 0;
}

void linked_init()
{
    top = NULL;
}

int linked_isEmpty()
{
    if (top == NULL)
    {
        return 1;      // TRUE
    }
    else
    {
        return 0;      // FALSE
    }
}

void linked_push(element item)
{
    stackNode* temp = (stackNode*)calloc(1, sizeof(stackNode));
    temp->data = item;
    temp->link = top; //삽입노드를 top의 위에 연결
    top = temp;       //top 위치를 삽입 노드로 이동
}

element linked_pop()
{
    element item;
    stackNode* temp = top;

    if (linked_isEmpty()) //스택이 공백 리스트인 경우
    {
        printf("\n\tStack is Empty!\n\n");
        return 0;
    }
    else // 스택에 연결리스트가 존재하는 경우
    {
        item = temp->data;
        top = temp->link; // top 위치를 삭제 노드 아래로 이동
        free(temp); // 삭제된 노들의 메모리 반환
        return item; // 삭제된 원소 반환
    }
}

element linked_peek()
{
    if (linked_isEmpty())
    {
        printf("\n\tStack is Empty!\n\n");
        return 0;
    }
    else
    {
        return (top->data);  // 현재 top위치의 데이터를 반환
    }
}

void linked_printStack()
{
    stackNode* curNode = top;

    printf("\n STACK [");
    while (curNode != NULL)
    {
        printf("%d   ", curNode->data);
        curNode = curNode->link;
    }
    printf("]\n");
}

void freeStack()
{
    stackNode* pre = NULL;
    stackNode* cur = NULL;

    pre = cur = top;
    while (cur != NULL)
    {
        pre = cur;
        cur = cur->link;
        free(pre);
        pre = NULL;
    }
}

void test2()
{
    element item;
    int cnt_i;

    top = NULL;
    printf("\n\t **연결리스트를 이용한 스택 연산\n");
    linked_printStack();

    for (cnt_i = 0; cnt_i < 10; cnt_i++)
    {
        linked_push(cnt_i);
        linked_printStack();
    }
    item = linked_peek();
    printf("\n\t현재 top위치에 있는 원소는 [%d]입니다.\n", item);

    for (cnt_i = 0; cnt_i < 10; cnt_i++)
    {
        item = linked_pop();
        printf("pop => %d  ", item);
        linked_printStack();
    }

    freeStack(); // 모든 stack 삭제
}


// EOF
