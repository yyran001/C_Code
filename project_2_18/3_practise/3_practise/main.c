//读入一个字符，一个整数，一个单精度浮点数用换行符隔开，
//按顺序输出字符、整数、单精度浮点数，用空格分隔，浮点数保留 6 位小数
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char i = '0';
    int j = 0;
    float k = 0;
    scanf("%c %d %f", &i, &j, &k);
    printf("%c %d %.6f", i, j, k);

    return 0;
}