//�������� seconds ������ת����Сʱ�����Ӻ��롣
//���ݷ�Χ��0 < seconds < 100000000

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int seconds = 0;
    int h = 0;
    int m = 0;
    int s = 0;
    scanf("%d", &seconds);
    if (seconds > 0 && seconds <= 100000000)
    {
        h = seconds / 3600;
        printf("%d ", h);
        m = (seconds / 60) % 60;
        printf("%d ", m);
        s = seconds % 60;
        printf("%d", s);
    }

    return 0;
}