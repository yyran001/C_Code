#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    for (i = 100; i < 1000; i++)
    {
        for (j = 2; j <= (int)sqrt(i); j++)
        {
            k = i % j;
            if (k == 0)
            {
                break;
            }
            else if (j == (int)sqrt(i))
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}