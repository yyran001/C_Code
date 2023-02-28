#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char i[13] = { 0 };
    int j = 0;
    int k = 1;
    int sum = 0;
    scanf("%s", i);
    for (j = 0; j < 11; j++)
    {
        if (i[j] == '-')
        {
            continue;
        }
        else
        {
            sum = sum + k * (i[j] - '0');
            k++;
        }
    }
    int x = sum % 11;
    if (x == (i[12] - '0') || (x == 10 && i[12] == 'X'))
    {
        printf("Right");
    }
    else {
        for (j = 0; j < 12; j++)
        {
            printf("%c", i[j]);
        }
        if (x == 10)
        {
            printf("X");
        }
        else {
            printf("%d", x);
        }
    }

    return 0;
}