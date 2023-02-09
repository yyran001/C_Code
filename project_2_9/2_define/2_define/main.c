//define定义标识符常量
#define max 100

//define定义宏
#define add(x,y) (x+y)

#include <stdio.h>

int main()
{

	printf("%d\n", max);

	printf("%d\n", 4 * add(4, 5));

	return 0;
}

