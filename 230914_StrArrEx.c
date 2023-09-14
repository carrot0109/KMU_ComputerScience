	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void TestFunc() {
		char arr[5] = { 'a','n','g','e','l' };					// 널문자를 입력하지 않았기 때문에 출력 시 오류
		printf("%s\n", arr);

		/*char arr_wrong[5] = { 'a','n','g','e','l','\0'};		// 5개가 아닌 값을 6개 저장했으므로 오류
		printf("%s\n", arr_wrong);*/

		char arr_promise[6] = { 'a','n','g','e','l','\0'};
		printf("%s\n", arr_promise);
	}

	int main() {
		TestFunc();

		return 0;
	}
