//����һ��������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int i = num / 10;
    int count = 1;
    int j = 0;
    int res = 0;
    while (1)
    {
        
        if (i != 0)
            count++;
        else if (i == 0)
            break;
        i = i / 10;
    }
    int c = count;
    for (j = 0; j < count; j++)
    {
        int t = pow(10, c - 1);
        int k = num / t % 2;
        if (k != 0)
        {
            res = res + t;
        }
        c--;
        k = num;
    }
    printf("%d", res);

    return 0;
}