#include <stdio.h>

typedef unsigned int u_int;

void func()
{

	static int a = 0;//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
	a++;
	printf("%d ",a);

}

extern int b;//�����ⲿ����  add.c
extern int add(int x,int y);

int main()
{

	u_int num = 100;//unsigned int num = 100;
	printf("%d\n", num);

	int i = 0;
	while (i < 10)
	{
		func();
		i++;
	}

	printf("\n%d\n", b);//add.c

	int c = 5;
	int d = 8;
	int sum = add(c, d);
	printf("%d\n", sum);

	return 0;
}