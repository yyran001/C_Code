#include <stdio.h>

//��һ�����������в��Ҿ����ĳ������n
//���ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 8;//Ҫ���ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}

	return 0;
}