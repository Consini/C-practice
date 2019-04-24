#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = strlen(arr);
	int ret = binary(arr[10], 7, left, right);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	system("pause");
	return 0;
}
