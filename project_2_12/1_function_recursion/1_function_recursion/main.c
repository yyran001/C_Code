#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(unsigned int j)
{
	if (j > 9)
	{
		print(j / 10);
	}
	printf("%d ", j % 10);
}

int main()
{
	unsigned int i = 0;
	scanf("%d", &i);
	print(i);

	return 0;
}