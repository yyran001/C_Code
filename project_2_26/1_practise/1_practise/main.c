//多组输入，每一行输入一个字符。
//针对每组输入，输出单独占一行，判断输入字符是否为字母

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