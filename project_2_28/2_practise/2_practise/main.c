

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = n;
    int j = 0;
    int k = 0;
    int count = 0;
    while (1)
    {
        if (i % 2 == 0)
        {
            i = i / 2;
            count++;
        }
        else {
            i = i * 3 + 1;
            count++;
        }
        j = i;
        i = j;
        if (j == 1)
            break;
    }
    printf("%d", count);

    return 0;
}