//����һ���ַ���һ��������һ�������ȸ������û��з�������
//��˳������ַ��������������ȸ��������ÿո�ָ������������� 6 λС��
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char i = '0';
    int j = 0;
    float k = 0;
    scanf("%c %d %f", &i, &j, &k);
    printf("%c %d %.6f", i, j, k);

    return 0;
}