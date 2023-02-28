//求两个正整数的最大公约数与最小公倍数之和

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef unsigned long long u_l_l;

int main() {
    u_l_l i = 0;
    u_l_l j = 0;
    u_l_l k = 0;
    scanf("%llu %llu", &i, &j);
    u_l_l max = i > j ? i : j;
    u_l_l min = i < j ? i : j;
    k = max % min;
    if (k != 0)
    {
        while (1)
        {
            max = min;
            min = k;
            k = max % min;
            if (k == 0)
                break;
        }
    }
    else
    {
        min = i;
    }
    u_l_l yue = min;
    u_l_l bei = i * j / yue;
    u_l_l sum = yue + bei;
    printf("%llu", sum);

    return 0;
}