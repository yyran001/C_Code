#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//º∆À„n!
int main()
{
	int i = 0;
	int j = 0;
	int k = 1;
	scanf("%d", &j);
	for (i = 1; i <= j; i++)
	{
		k = k * i;
	}
	printf("%d\n", k);

	return 0;
}