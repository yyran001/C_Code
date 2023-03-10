#include <stdio.h>

//在一个有序数组中查找具体的某个数字n
//二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 8;//要查找的数字
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
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}

	return 0;
}