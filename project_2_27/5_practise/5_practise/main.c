//1+1/2+1/3+¡­+1/NµÄÖµ

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    double k = 0;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        k += 1.0 / j;
    }
    printf("%.6lf", k);

    return 0;
}