#include <stdio.h>

//������������Ķ��ֲ���

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int j = binary_search(arr, i, sz);
	if (j == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", j);
	}

	return 0;
}