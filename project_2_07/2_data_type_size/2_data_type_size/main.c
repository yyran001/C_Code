#include <stdio.h>

int main()
{
	//sizeof �������ͻ��߱�����ռ�ռ�Ĵ�С
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));

	return 0;
}