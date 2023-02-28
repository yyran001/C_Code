#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int input = 1;
	printf("好好学习C/C++（1/0）？：");
	scanf("%d", &input);

	if (input == 1)
		printf("前途似锦\n");
	else
		printf("卖红薯\n");

	return 0;
}