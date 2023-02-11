#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int get_max(int x, int y) 
{
	return x > y ? x : y;
}

int main()
{
	int a = 50;
	int b = 40;
	//scanf("%d %d", &a, &b);

	int max = get_max(a, b);
	printf("max = %d\n", max);

	return 0;
}