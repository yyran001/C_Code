//给你两个整数，要求输出这两个整数的和

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    unsigned int i = 0;
    unsigned int j = 0;
    int sum = 0;
    scanf("%d %d", &i, &j);
    sum = i + j;
    printf("%d", sum);

    return 0;
}