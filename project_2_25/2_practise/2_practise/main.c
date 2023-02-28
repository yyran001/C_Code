//输入一个数，把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int i = num / 10;
    int count = 1;
    int j = 0;
    int res = 0;
    while (1)
    {
        
        if (i != 0)
            count++;
        else if (i == 0)
            break;
        i = i / 10;
    }
    int c = count;
    for (j = 0; j < count; j++)
    {
        int t = pow(10, c - 1);
        int k = num / t % 2;
        if (k != 0)
        {
            res = res + t;
        }
        c--;
        k = num;
    }
    printf("%d", res);

    return 0;
}