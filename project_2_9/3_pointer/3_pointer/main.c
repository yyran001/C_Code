#include <stdio.h>

int main()
{

	int a = 10;//a���ڴ��з����ĸ��ֽڿռ�
	printf("%p\n", &a);//%p��ӡ��ַ

	int* pa = &a;//pa������ŵ�ַ��C������pa��ָ�����
	//*˵��pa��ָ�����
	//int˵��paָ��Ķ�����int����

	*pa = 20;//*�����ò��� *pa����ͨ��pa�ĵ�ַ�ҵ�aȻ��ֵ
	printf("%d\n", a);

	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(char*));
	printf("%zd\n", sizeof(short*));
	printf("%zd\n", sizeof(long*));
	printf("%zd\n", sizeof(long long*));
	printf("%zd\n", sizeof(double*));
	printf("%zd\n", sizeof(float*));

	return 0;
}