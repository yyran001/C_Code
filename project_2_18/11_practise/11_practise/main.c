//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

    int i = 0;
    scanf("%d", &i);
    int j = 2 << (i - 1);
    printf("%d", j);

    return 0;
}