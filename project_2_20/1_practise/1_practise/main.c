//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//第1行，正整数n（1≤n≤100）
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int k = 0;
    float score[100] = { 0 };
    float sum = 0;
    float avg = 0;
    float largest = 0;
    float smallest = 0;
    scanf("%d", &i);
    for (k = 0; k < i; ++k)
    {
        scanf("%f", &score[k]);
        sum += score[k];
    }
    int x = 0;
    largest = score[0];
    for (x = 1; x < i; x++)
    {
        if (largest < score[x])
        {
            largest = score[x];
        }
    }
    printf("%.2f ", largest);
    int y = 0;
    smallest = score[0];
    for (y = 1; y < i; y++)
    {
        if (smallest > score[y])
        {
            smallest = score[y];
        }
    }
    printf("%.2f ", smallest);
    printf("%.2f", sum / i);

    return 0;
}