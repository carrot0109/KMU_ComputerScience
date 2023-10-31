#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DelAtStart(int* list, int* Numoflist) {
	for (int i = 0; i < (*Numoflist) - 1; i++) {
		list[i] = list[i + 1];
	}
	(*Numoflist)--;
}

void DelAtLast(int* list, int* Numoflist) {
	list[*Numoflist] = 0;
	(*Numoflist)--;
}

void DelAtMiddle(int* list, int* Numoflist, int pos) {
	for (int i = pos - 1; i < (*Numoflist) - 1; i++) {
		list[i] = list[i + 1];
	}
	(*Numoflist)--;
}

void PrintList(int* list, int Numoflist) {
	for (int i = 0; i < Numoflist; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main() {
	int list[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int Numoflist = 10;

	printf("\ndelete a value at start\n");
	DelAtStart(list, &Numoflist);
	PrintList(list, Numoflist);

	printf("\ndelete a value at middle\n");
	printf("Input a position where you delete\n");
	int pos;
	scanf("%d", &pos);
	DelAtMiddle(list, &Numoflist, pos);
	PrintList(list, Numoflist);

	printf("\ndelete a value at last\n");
	DelAtLast(list, &Numoflist);
	PrintList(list, Numoflist);
}
