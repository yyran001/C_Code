//����һ����������Ҫ��õ��ø������ĸ�λ����
//���ݷ�Χ��0<n<=200

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float i = 0;
    scanf("%f", &i);
    if (i > 0 && i <= 200)
    {
        int j = 0;
        j = (int)i % 10;
        printf("%d", j);
    }
    return 0;
}
