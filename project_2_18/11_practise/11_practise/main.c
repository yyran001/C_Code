//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

    int i = 0;
    scanf("%d", &i);
    int j = 2 << (i - 1);
    printf("%d", j);

    return 0;
}