#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddAtStart(int* list, int* Numoflist, int tmp) {
	for (int i = *(Numoflist)-1; i >= 0; i--) {
		list[i + 1] = list[i];
	}
	list[0] = tmp;
	(*Numoflist)++;
}

void AddAtLast(int* list, int* Numoflist, int tmp) {
	list[*Numoflist] = tmp;
	(*Numoflist)++;
}

void AddAtMiddle(int* list, int* Numoflist, int tmp, int pos) {
	for (int i = (*Numoflist) - 1; i >= pos-1; i--) {		// n번째에 넣는다고 pos를 정했으면 n번째의 수까지 옮겨야됨
		list[i + 1] = list[i];
	}
	list[pos-1] = tmp;
	(*Numoflist)++;
}

void PrintList(int* list, int Numoflist) {
	for (int i = 0; i < Numoflist; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main() {
	int list[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int tmp = 0;
	int Numoflist = 10;

	printf("\nInput a value at start\n");
	scanf("%d", &tmp);
	AddAtStart(list, &Numoflist, tmp);
	PrintList(list, Numoflist);

	printf("\nInput a value at middle\n");
	scanf("%d", &tmp);
	printf("Input a position where you put in value\n");
	int pos;
	scanf("%d", &pos);
	AddAtMiddle(list, &Numoflist, tmp, pos);
	PrintList(list, Numoflist);

	printf("\nInput a value at last\n");
	scanf("%d", &tmp);
	AddAtLast(list, &Numoflist, tmp);
	PrintList(list, Numoflist);
}
