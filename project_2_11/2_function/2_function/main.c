#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = { 0 };
	char arr2[] = "YyRan";
	strcpy (arr1, arr2);
	printf("%s\n", arr1);

	memset(arr2, 'y', 5);
	printf("%s\n", arr2);

	return 0;
}