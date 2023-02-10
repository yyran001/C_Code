#include <stdio.h>

int main()
{

	int i = 0;
	do
	{
	/*	if (i == 5)
			break;*/

		if (i == 5)
			continue;

		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}