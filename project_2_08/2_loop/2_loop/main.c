#include <stdio.h>

int main()
{

	int line = 0;
	while (line < 30000)
	{
		printf("Ğ´ÁË%dĞĞ´úÂë\n", line);
		line++;
	}
	if (line == 30000)
		printf("Success\n");

	return 0;
}