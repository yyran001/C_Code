//������������a, b, ���a / b��ֵ��ֻ������������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d %d", &i, &j);
//    k = i / j;
//    printf("%d", k);
//    return 0;
//}

//������������a, b, ���a ����b������
int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    scanf("%d %d", &i, &j);
    k = i % j;
    printf("%d", k);
    return 0;
}