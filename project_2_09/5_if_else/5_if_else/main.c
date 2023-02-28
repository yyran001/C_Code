#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	//int age = 0;
	//printf("请输入年龄：");
	//scanf("%d", &age);

	//if (age > 18)
	//	printf("成年\n");
	//else {
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}
	//int a = 0;
	//printf("请输入一个数：");
	//scanf("%d", &a);
	//if (a % 2 == 1)
	//{
	//	printf("这个数为奇数\n");
	//}
	//else
	//{
	//	printf("这个数为偶数\n");
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