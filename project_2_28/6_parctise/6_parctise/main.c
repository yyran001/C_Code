//变种水仙花10000~99999


#include <stdio.h>
#include <math.h>
int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    int y = 0;
    int res = 0;
    for (i = 10000; i <= 99999; i++)
    {
        for (j = 1, res = 0; j <= 4; j++)
        {
            k = pow(10, j);
            x = i % k;
            y = i / k;
            res += x * y;
        }
        if (res == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}