#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ��char�����ַ�
//���һ��������ַ����ĶԽ��߳�5���ַ�����б���õ�����
//���룺#
//�����#
//     ###
//    #####
//     ###
//      #

int main() {

    int i = 0;
    int j = 0;
    int k = 0;
    char c = '0';
    scanf("%c", &c);

    for (i = 1; i <= 3; i++, k = 0)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("%c", c);
            k++;
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--, k = 0)
    {
        for (j = 2; j >= i; j--)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("%c", c);
            k++;
        }
        printf("\n");
    }

    return 0;
}