//�Ӽ�������һ�������������ж���������ܱ� 2 3 7 ���ļ������������������������
//������ܱ� 2 3 7 ����һ������������� n��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("2 ");
    }
    if (i % 3 == 0)
    {
        printf("3 ");
    }
    if (i % 7 == 0)
    {
        printf("7");
    }
    if (i % 2 != 0 && i % 3 != 0 && i % 7 != 0)
    {
        printf("n");
    }

    return 0;
}