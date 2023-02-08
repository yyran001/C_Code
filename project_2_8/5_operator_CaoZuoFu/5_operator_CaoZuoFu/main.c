#include <stdio.h>

int main()
{

	int a = 5 / 2;
	printf("%d\n", a);//取整

	int b = 5 % 2;
	printf("%d\n", b);//取余

	float c = 5 / 2.0;
	printf("%f\n", c);//除法带小数

	int d = 5;
	printf("%d\n", !d);//非0即真 d=5为真 !为取反 0为假

	int e = d << 3;
	printf("%d\n", e);//左移位

	int f = d >> 3;
	printf("%d\n", f);//右移位

	int arr[10] = { 0 };
	printf("%zd\n", sizeof(arr));
	printf("%zd\n", sizeof(arr[0]));
	int g = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",g);

	//int h = 8;
	//printf("%d", ~h);//按位取反

	int i = 8;
	int j = ++i;//先++再使用
	printf("%d\n", j);
	printf("%d\n", i);

	int l = 8;
	int m = l++;//先使用再++
	printf("%d\n", m);
	printf("%d\n", l);

	int x = (int)3.14;//强制转换
	printf("%d\n", x);

	int y = 2;
	int z = 0;
	printf("%d\n", x && y);//两个为真结果为真
	printf("%d\n", x && z);//一个为假结果为假
	printf("%d\n", x || z);//一个为一结果为一

	int max = y > z ? y : z;//表达式成立执行第二个，不成立执行第三个
	printf("%d\n", max);

	//逗号表达式从左到右计算，结果为最后一个表达式
	           //x=4      z=0        y=7
	int xyz = (x = y + 2, z = x - 4, y = z + 7);
	printf("%d\n", xyz);

	//[]下标使用
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr1[8]);

	//()函数调用操作符
	printf("Hello world!\n");//此处()即为函数调用操作符


	return 0;
}