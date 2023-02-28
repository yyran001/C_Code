//输入三个整数，用空格隔开。
//输出 3 个整数以第二三个数字占 8 个空格靠右对齐输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    scanf("%d %d %d", &i, &j, &k);
    printf("%d%8d%8d", i, j, k);

    return 0;
}