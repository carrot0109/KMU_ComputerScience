#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct {
	int xpos;
	int ypos;
}Point;

typedef struct {
	Point LeftUp;
	Point RightDown;
}Rectangle;

int area(Rectangle* pSqr) {
	int area = 0;
	int length = (pSqr->RightDown).xpos - (pSqr->LeftUp).xpos;
	int height = (pSqr->LeftUp).ypos - (pSqr->RightDown).ypos;
	return length * height;
}

void pInf(Rectangle* pSqr) {
	printf("[ %d, %d] ", (pSqr->LeftUp).xpos, (pSqr->LeftUp).ypos);
	printf("[ %d, %d]\n", (pSqr->RightDown).xpos, (pSqr->LeftUp).ypos);
	printf("[ %d, %d] ", (pSqr->LeftUp).xpos, (pSqr->RightDown).ypos);
	printf("[ %d, %d] ", (pSqr->RightDown).xpos, (pSqr->RightDown).ypos);
}

void test_func() {
	Rectangle sqr;
	Rectangle* pSqr;
	pSqr = &sqr;
	printf("leftUp\n");
	printf("(x,y) : ");
	scanf("%d%d", &((sqr.LeftUp).xpos), &((sqr.LeftUp).ypos));

	printf("RightDown\n");
	printf("(x,y) : ");
	scanf("%d%d", &((sqr.RightDown).xpos), &((sqr.RightDown).ypos));

	int Area = area(pSqr);
	printf("area : %d\n", Area);

	pInf(pSqr);
}

int main() {
	test_func();
	return;
}
