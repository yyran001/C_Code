//����һ���ַ�����������1+�����+������2 �����кϷ��������������+��-��*��/����
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