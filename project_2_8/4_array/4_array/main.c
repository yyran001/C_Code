#include <stdio.h>

int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };//สฃำเฮช0

	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	int k = 0;
	while (k < 5)
	{
		printf("%c\n", ch[k]);
		k++;
	}

	return 0;
}