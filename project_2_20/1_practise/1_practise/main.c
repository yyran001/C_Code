//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//��1�У�������n��1��n��100��
//��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
//���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int i = 0;
    int k = 0;
    float score[100] = { 0 };
    float sum = 0;
    float avg = 0;
    float largest = 0;
    float smallest = 0;
    scanf("%d", &i);
    for (k = 0; k < i; ++k)
    {
        scanf("%f", &score[k]);
        sum += score[k];
    }
    int x = 0;
    largest = score[0];
    for (x = 1; x < i; x++)
    {
        if (largest < score[x])
        {
            largest = score[x];
        }
    }
    printf("%.2f ", largest);
    int y = 0;
    smallest = score[0];
    for (y = 1; y < i; y++)
    {
        if (smallest > score[y])
        {
            smallest = score[y];
        }
    }
    printf("%.2f ", smallest);
    printf("%.2f", sum / i);

    return 0;
}