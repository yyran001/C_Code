#include <stdio.h>

//��ӡ100-200������

int primr(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (primr(i) == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}