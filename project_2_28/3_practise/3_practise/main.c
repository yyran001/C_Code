//1~2019中共有多少个数包含数字9

#include <stdio.h>

int main() {
    int i = 0;
    int count = 0;
    for (i = 1; i < 2020; i++)
    {
        if (i % 10 == 9)
        {
            count++;
        }
        else if (i / 10 % 10 == 9)
        {
            count++;
        }
        else if (i / 100 % 10 == 9)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}