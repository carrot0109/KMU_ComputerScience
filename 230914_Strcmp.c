	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void TestFunc() {
		char first[40] = "IVE";
		char second[40] = "Newjeans";
		char third[40] = "BTS";

		printf("First String: %s\n", first);
		printf("second String: %s\n", second);
		printf("third String: %s\n", third);

		printf("Return value of strcmp(): %d\n", strcmp(first, second));
		printf("Return value of strcmp(): %d\n", strcmp(second, third));
		printf("Return value of strcmp(): %d\n", strcmp(third, first));

		printf("Return value of strcmp(): %d\n", strcmp(first, first));
		printf("Return value of strcmp(): %d\n", strcmp(second, second));
		printf("Return value of strcmp(): %d\n", strcmp(third, third));

	}
	int main() {
		TestFunc();

		return 0;
	}
