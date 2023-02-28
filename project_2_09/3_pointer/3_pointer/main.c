#include <stdio.h>

int main()
{

	int a = 10;//a在内存中分配四个字节空间
	printf("%p\n", &a);//%p打印地址

	int* pa = &a;//pa用来存放地址，C语言中pa叫指针变量
	//*说明pa是指针变量
	//int说明pa指向的对象是int类型

	*pa = 20;//*解引用操作 *pa就是通过pa的地址找到a然后赋值
	printf("%d\n", a);

	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(char*));
	printf("%zd\n", sizeof(short*));
	printf("%zd\n", sizeof(long*));
	printf("%zd\n", sizeof(long long*));
	printf("%zd\n", sizeof(double*));
	printf("%zd\n", sizeof(float*));

	return 0;
}