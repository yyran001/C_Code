
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int n = 0;
    int score[3] = { 0 };
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &score[j]);
        }
        k = (score[0] + score[1] + score[2]) / 3;
        if (k < 60)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}