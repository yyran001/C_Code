//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int sum = 0;
    scanf("%x %o", &i, &j);
    sum = i + j;
    printf("%d", sum);

    return 0;
}