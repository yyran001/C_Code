#include <stdio.h>

typedef unsigned int u_int;

void func()
{

	static int a = 0;//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
	a++;
	printf("%d ",a);

}

extern int b;//声明外部符号  add.c
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