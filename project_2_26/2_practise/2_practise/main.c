//从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。
//如果不能被 2 3 7 任意一个数整除则输出 n。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("2 ");
    }
    if (i % 3 == 0)
    {
        printf("3 ");
    }
    if (i % 7 == 0)
    {
        printf("7");
    }
    if (i % 2 != 0 && i % 3 != 0 && i % 7 != 0)
    {
        printf("n");
    }

    return 0;
}