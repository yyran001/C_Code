//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        float i = a + b + c;
        float p = i / 2;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2f area=%.2f", i, s);
    }

    return 0;
}