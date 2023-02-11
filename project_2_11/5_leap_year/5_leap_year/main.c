#include <stdio.h>

//判断1000-2000的闰年

int leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (leap_year(y) == 1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\n一共有 %d 年\n", count);

	return 0;
}