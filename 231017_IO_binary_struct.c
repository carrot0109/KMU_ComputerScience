#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct {
	char name[32];
	int id;
	double height;
}STUDENT;

void test_func()
{
	STUDENT stu[2] = { {0, }, };
	STUDENT tmp_stu;
	FILE* fp = NULL;
	int i = 0;
	int fileSize = 0;

	fp = fopen("stuList.dat", "wb");	// 쓰기
	assert(fp != NULL);

	for (i = 0; i < 2; i++) {
		printf("[%d] 학생의 이름, 학번, 키를 입력하세요:\n", i + 1);
		scanf("%s%d%lf", stu[i].name, &(stu[i].id), &(stu[i].height));
		fwrite(&stu[i], sizeof(STUDENT), 1, fp);	// 파일에 입력받은 정보 이진 형식으로 출력
	}

	fclose(fp);

	/////////////////////////////////////////////////////////////////////////////////////////////////

	fp = fopen("stuList.dat", "rb");	// 읽기
	assert(fp != NULL);

	// 구조체배열의 크기 구하기 
	fseek(fp, 0, SEEK_END);  // step 1
	fileSize = ftell(fp); // step 2 
	// ftell : 파일의 현재 파일 위치를 나타내는 파일 위치 지정자 값 리턴 --> END로 간 후이므로 2 를 가리킴
	fseek(fp, 0, SEEK_SET); // step 3

	for (i = 0; i < fileSize / sizeof(STUDENT); i++)
	{
		fread(&tmp_stu, sizeof(STUDENT), 1, fp);
		printf("[%d] 학생정보: %s, %d, %lf\n", i, tmp_stu.name, tmp_stu.id, tmp_stu.height);
	}

	fclose(fp);
}


int main() {
	test_func();
	return;
}
