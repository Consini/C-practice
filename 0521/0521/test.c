#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include<stdio.h>
#include<stdlib.h>
int Order(int arr[], int len)
{
	int result = arr[0];
	int i = 0;
	for (; i < len; i++){
		if (result > arr[i]){
			result = arr[i];
		}
	}
	return result;
}
int main()
{
	int a[] = { 3, 4, 5, 1, 2 };
	int len = sizeof(a) / sizeof(a[0]);
	int ret = Order(a, len);
	printf("数组的最小数字为%d\n", ret);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Ordersearch(int arr[], int left, int right)
{
	int result = arr[left];
	for (int i = left + 1; i <= right; i++){
		if (result > arr[i]){
			result = arr[i];
		}
	}
	return result;
}
int Minnum(int arr[], int len)
{
	assert(arr);
	int left = 0;
	int right = len - 1;
	int mid = left;
	while (arr[left] >= arr[right]){
		if (1 == (right - left)){
			mid = right;
			break;
		}
		mid = left + (right - left) / 2;
		if (arr[left] == arr[mid] && arr[mid] == arr[right]){
			return Ordersearch(arr, left, right);
		}
		if (arr[left] <= arr[mid]){
			left = mid;
		}
		else if (arr[right] >= arr[mid]){
			right = mid;
		}
	}
	return arr[mid];
}
int main()
{
	int a[] = {1,1,1,1,10,0,0,1};
	int len = sizeof(a) / sizeof(a[0]);
	int ret = Minnum(a, len);
	printf("数组的最小数字为%d\n", ret);
	system("pause");
	return 0;
}
#endif