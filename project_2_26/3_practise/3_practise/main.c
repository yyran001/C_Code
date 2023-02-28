//输入10个整数，分别统计输出正数、负数的个数。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int arr[10] = { 0 };
    int i = 0;
    while (i < 10)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int j = 0;
    int count = 0;
    for (j = 0; j < 10; j++)
    {
        if (arr[j] > 0)
        {
            count++;
        }
    }
    printf("positive:%d\n", count);
    printf("negative:%d", 10 - count);

    return 0;
}