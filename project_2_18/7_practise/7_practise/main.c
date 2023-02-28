//输入两个整数a, b, 输出a / b的值，只保留整数部分

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d %d", &i, &j);
//    k = i / j;
//    printf("%d", k);
//    return 0;
//}

//输入两个整数a, b, 输出a 除以b的余数
int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    scanf("%d %d", &i, &j);
    k = i % j;
    printf("%d", k);
    return 0;
}