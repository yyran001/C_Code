#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	//int age = 0;
	//printf("���������䣺");
	//scanf("%d", &age);

	//if (age > 18)
	//	printf("����\n");
	//else {
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}
	//int a = 0;
	//printf("������һ������");
	//scanf("%d", &a);
	//if (a % 2 == 1)
	//{
	//	printf("�����Ϊ����\n");
	//}
	//else
	//{
	//	printf("�����Ϊż��\n");
	//}

	int b = 0;

	while (b <= 100)
	{
		if (b % 2 == 1)
		{
			printf("%d ", b);
		}
		b++;
	}

	return 0;
}