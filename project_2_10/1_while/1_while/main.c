#include <stdio.h>

int main()
{
	/*int i = 1;*/

	/*while (i <= 10)
	{
		if (i == 8)
			break;
		printf("%d ",i);
		i++;
	}*/

	/*while (i <= 10)
	{
		if (i == 8)
			continue;
		printf("%d ", i);
		i++;
	}*/

	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}