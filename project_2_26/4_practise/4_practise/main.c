//寄快递，快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，不足 1kg 部分按 1kg计算。
// 如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
//第一行输入一个单精度浮点数 a 和一个字符 b ，
//a 表示要寄的快递的重量，b表示是否选择加急，'y' 表示加急 ，'n' 表示不加急。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float a = 0;
    char b = '0';
    scanf("%f %c", &a, &b);
    int cost = 0;
    if (a <= 1)
    {
        cost = 20;
    }
    else {
        if (a - (int)a > 0)
        {
            cost = 20 + a;
        }
        else {
            cost = 19 + a;
        }
    }
    if (b == 'y')
    {
        cost = cost + 5;
    }
    printf("%d", cost);

    return 0;
}