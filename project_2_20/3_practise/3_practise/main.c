//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c, c = 5 / 9 * (f - 32)

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float f = 0;
    scanf("%f", &f);
    float c = (5 / 9.0) * (f - 32);
    printf("%.3f", c);
    return 0;
}