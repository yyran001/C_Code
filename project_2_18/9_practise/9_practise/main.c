//СS�����ڿ��Կ�ѧ�����ÿ��İ���
//СY����û�������𣬿�ѧ�������Ӻ��ˡ�
//СS��NOOOOOOOOOOOOOOOO��
//СS֪��ԭ�ƻ�����X��ѧ��֪ͨ��ѧʱ������N�죬���ʿ�ѧ���������ڼ�����������7��ʾ����

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int week[] = { 1, 2, 3, 4, 5, 6, 7 };
    int i = 0;
    int j = 0;
    scanf("%d %d", &i, &j);
    int k = 0;
    k = i + j;
    if (1 <= i && i <= 7 && j >= 1 && j <= 1000)
    {
        if (k <= 7)
        {
            printf("%d", week[k - 1]);
        }
        else if (j <= 7)
        {
            printf("%d", week[k % 7 - 1]);
        }
        else if (j > 7)
        {
            int x = i + j % 7;
            if (x <= 7)
            {
                printf("%d", week[x - 1]);
            }
            if (x > 7)
            {
                printf("%d", week[x % 7 - 1]);
            }
        }
    }

    return 0;
}