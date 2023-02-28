#include <stdio.h>

int main()
{
	int i = 15;
	int count = 0;
	while (1)
	{
		if (i & 1 == 1)
		{
			count++;
		}
		i = i >> 1;
		if (i == 0)
		{
			break;
		}
	}
	printf("%d\n", count);

	return 0;
}