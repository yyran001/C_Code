//¼ÆËã 1+1/£¨1-3£©+1/£¨1-3+5£©+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))µÄÖµ

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    int f = 0;
    double res = 0;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        for (k = 1; k <= j; k++)
        {
            f += pow(-1, k - 1) * (2 * k - 1);
        }
        res += 1.0 / f;
        f = 0;
    }
    printf("%.3lf", res);

    return 0;
}