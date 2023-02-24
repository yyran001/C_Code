#include <stdio.h>

int main()
{
	int i = 11;
	int j = 16;
	printf("i = %d j = %d\n", i, j);

	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("i = %d j = %d\n", i, j);

	return 0;
}