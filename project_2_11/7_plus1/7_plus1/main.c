#include <stdio.h>

//调用一次函数，数值加1

void add(int* p)
{
	(*p)++;
}

int main()
{
	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		add(&i);
		printf("%d\n", i);
	}

	return 0;
}