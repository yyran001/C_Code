//�Ӽ�����������һ���ַ����ж��Ƿ�����ĸ��������Сд����

#include <stdio.h>

int main() {
    char i = getchar();
    if (i >= 'a' && i <= 'z')
    {
        printf("YES");
    }
    else if (i >= 'A' && i <= 'Z')
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}