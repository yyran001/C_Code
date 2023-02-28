//求一个整数的所有数位之和

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);
    int j = i;
    int k = 0;
    int x = 0;
    int y = 0;
    int count = 1;
    while (1)
    {
        x = j / 10;
        j = x;
        if (x == 0)
            break;
        else
            count++;
    }
    int res = 0;
    for (j = 0; j < count; j++)
    {
        x = i / 10;
        y = i % 10;
        res += y;
        i = x;
    }
    printf("%d", res);

    return 0;
}