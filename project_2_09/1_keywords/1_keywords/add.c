int b = 2023;//全局变量

//static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c)内部可以使用
//static int b = 2023;

int add(int x, int y)
{
	return x + y;
}

//static修饰函数，使得函数只能自己所在的源文件内部使用，不能再其他源文件内部使用
//static int add(int x, int y)
//{
//	return x + y;
//}