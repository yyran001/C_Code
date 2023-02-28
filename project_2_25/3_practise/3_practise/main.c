//判断一个整数n是否是闰年

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("yes");
    }
    else if (year % 400 == 0)
    {
        printf("yes");
    }
    else
        printf("no");
    return 0;
}