#include <stdio.h>

int main()
{

	int a = 5 / 2;
	printf("%d\n", a);//ȡ��

	int b = 5 % 2;
	printf("%d\n", b);//ȡ��

	float c = 5 / 2.0;
	printf("%f\n", c);//������С��

	int d = 5;
	printf("%d\n", !d);//��0���� d=5Ϊ�� !Ϊȡ�� 0Ϊ��

	int e = d << 3;
	printf("%d\n", e);//����λ

	int f = d >> 3;
	printf("%d\n", f);//����λ

	int arr[10] = { 0 };
	printf("%zd\n", sizeof(arr));
	printf("%zd\n", sizeof(arr[0]));
	int g = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",g);

	//int h = 8;
	//printf("%d", ~h);//��λȡ��

	int i = 8;
	int j = ++i;//��++��ʹ��
	printf("%d\n", j);
	printf("%d\n", i);

	int l = 8;
	int m = l++;//��ʹ����++
	printf("%d\n", m);
	printf("%d\n", l);

	int x = (int)3.14;//ǿ��ת��
	printf("%d\n", x);

	int y = 2;
	int z = 0;
	printf("%d\n", x && y);//����Ϊ����Ϊ��
	printf("%d\n", x && z);//һ��Ϊ�ٽ��Ϊ��
	printf("%d\n", x || z);//һ��Ϊһ���Ϊһ

	int max = y > z ? y : z;//���ʽ����ִ�еڶ�����������ִ�е�����
	printf("%d\n", max);

	//���ű��ʽ�����Ҽ��㣬���Ϊ���һ�����ʽ
	           //x=4      z=0        y=7
	int xyz = (x = y + 2, z = x - 4, y = z + 7);
	printf("%d\n", xyz);

	//[]�±�ʹ��
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr1[8]);

	//()�������ò�����
	printf("Hello world!\n");//�˴�()��Ϊ�������ò�����


	return 0;
}