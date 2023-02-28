#include <stdio.h>

//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。

//int main() {
//
//    int i = 0xABCDEF;
//    printf("%-15d", i);
//
//    return 0;
//}

//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，
//并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。
int main() {

    int i = 1234;
    printf("0%o 0X%X", i, i);
    return 0;
}