#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//º∆À„1!+2!+3!+4!+5!+...+n!
int main()
{
	int i = 0;
	int j = 0;
	int k = 1;
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	for (j = 1; j <= x; j++)
	{
		for (i = 1, k = 1; i <= j; i++)
		{
			k = k * i;
		}
		y = y + k;
	}
	printf("%d\n", y);

	return 0;
}