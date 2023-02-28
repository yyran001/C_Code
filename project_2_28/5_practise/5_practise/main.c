//m~n之间的水仙花数，100 <= m < n <= 999
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    int y = 0;
    int count = 0;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        for (i = m, y = m; i <= n; i++)
        {
            j = i % 10;//个位数
            k = i / 10 % 10;//十位数
            x = i / 100;//百位数
            if (j * j * j + k * k * k + x * x * x == i)
            {
                printf("%d ", i);
                count++;
            }
            else
                y++;
            if (y == n && count == 0)
            {
                printf("no\n");
            }
        }
    }

    return 0;
}