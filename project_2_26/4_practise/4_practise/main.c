//�Ŀ�ݣ������ 1kg ���ڵİ��𲽼� 20 Ԫ���㣬�������ְ�ÿ kg 1Ԫ���㣬���� 1kg ���ְ� 1kg���㡣
// ����Ӽ��Ļ�Ҫ���⸶��Ԫ������ţţ�ܹ�Ҫ֧�����ٿ�ݷ�
//��һ������һ�������ȸ����� a ��һ���ַ� b ��
//a ��ʾҪ�ĵĿ�ݵ�������b��ʾ�Ƿ�ѡ��Ӽ���'y' ��ʾ�Ӽ� ��'n' ��ʾ���Ӽ���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float a = 0;
    char b = '0';
    scanf("%f %c", &a, &b);
    int cost = 0;
    if (a <= 1)
    {
        cost = 20;
    }
    else {
        if (a - (int)a > 0)
        {
            cost = 20 + a;
        }
        else {
            cost = 19 + a;
        }
    }
    if (b == 'y')
    {
        cost = cost + 5;
    }
    printf("%d", cost);

    return 0;
}