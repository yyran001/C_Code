//输入一行字符串，操作数1+运算符+操作数2 （其中合法的运算符包括：+、-、*、/）。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double i = 0;
    char j = '0';
    double k = 0;
    double res = 0;
    scanf("%lf%c%lf", &i, &j, &k);
    if (j == '+')
    {
        res = i + k;
        printf("%.4lf+%.4lf=%.4lf", i, k, res);
    }
    else if (j == '-')
    {
        res = i - k;
        printf("%.4lf-%.4lf=%.4lf", i, k, res);
    }
    else if (j == '*')
    {
        res = i * k;
        printf("%.4lf*%.4lf=%.4lf", i, k, res);
    }
    else if (j == '/')
    {
        if (k != 0)
        {
            res = i / k;
            printf("%.4lf/%.4lf=%.4lf", i, k, res);
        }
        else {
            printf("Wrong!Division by zero!");
        }
    }
    else {
        printf("Invalid operation!");
    }

    return 0;
}