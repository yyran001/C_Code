//从键盘任意输入一个字符，判断是否是字母（包括大小写）。

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