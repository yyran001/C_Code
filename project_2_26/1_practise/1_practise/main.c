//�������룬ÿһ������һ���ַ���
//���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char ch = '0';
    while ((scanf("%c", &ch)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("%c is an alphabet.\n", ch);
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c is an alphabet.\n", ch);
        }
        else {
            printf("%c is not an alphabet.\n", ch);
        }
        getchar();
    }

    return 0;
}