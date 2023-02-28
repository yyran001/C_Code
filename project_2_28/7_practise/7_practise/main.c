#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main() {
    int score[7] = { 0 };
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    while (1)
    {
        for (i = 0; i < 7; i++)
        {
            scanf("%d", &score[i]);
        }
        for (j = 0; j < 6; j++)
        {
            for (k = j + 1; k < 7; k++)
            {
                if (score[j] >= score[k])
                {
                    x = score[k];
                    score[k] = score[j];
                    score[j] = x;
                }
            }
        }
        float res = (score[1] + score[2] + score[3] + score[4] + score[5]) / 5.0;
        printf("%.2f\n", res);
        if (scanf("%d", score) == EOF)
            break;
    }

    return 0;
}