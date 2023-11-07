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

void Add_node_last(int i) {
	node* newNode;
	node* curNode;
	newNode = (node*)malloc(1 * sizeof(node));
	printf("input a value of %dth node : ", i+1);
	scanf("%d", &newNode->value);
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		return;
	}
	curNode = head;
	while (curNode->next != NULL) {
		curNode = curNode->next;
	}
	curNode->next = newNode;	
}

void display() {
	node* curNode;
	curNode = head;
	while (curNode->next != NULL) {
		printf("%d ", curNode->value);
		curNode = curNode->next;
	}
	printf("%d ", curNode->value);	// last node can have no address for next node, but it has value
}

int main() {
	int num;
	printf("how much you make node?\n");
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		Add_node_last(i);	
	}
	display();
	return;
}
