//º∆À„ 1+£®1+2£©+£®1+2+3£©+...+(1+2+3+...+n)

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int sum = 0;
    int res = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
        res += sum;
        sum = 0;
    }
    printf("%d", res);

    return 0;
}