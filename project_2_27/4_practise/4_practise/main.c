//1-2+3-4...+nµÄÖµ

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int odd = 0;
    int even = 0;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        if (j % 2 != 0)
        {
            odd += j;
        }
        else {
            even -= j;
        }
    }
    printf("%d", odd + even);
    return 0;
}