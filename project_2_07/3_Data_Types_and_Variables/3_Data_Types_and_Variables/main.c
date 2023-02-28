#include <stdio.h>

//{}外为全局变量
//当全局变量和局部变量冲突的情况下，优先局部
int a = 2023;
int main()
{
	//{}内为局部变量
	int a = 22;//推荐初始化
	//int a;不推荐
	char grade = 'A';//‘’为赋值    ""为字符串
	double weight = 63.3;

	printf("年龄为 %d\n", a);
	printf("等级为 %c\n", grade);
	printf("A为 %d\n", grade);
	printf("体重为 %f\n", weight);
	//%d - 整型
	//%c - char型对应的字符（%d打印char类型变量的值）
	//%f - float和double


}