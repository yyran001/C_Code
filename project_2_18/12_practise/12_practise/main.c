//问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。
//数据范围：0 < age≤200

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
    int age = 0;
    scanf("%d", &age);
    long long sec = 3.156 * pow(10, 7) * age;
    printf("%ld", sec);
    return 0;
}