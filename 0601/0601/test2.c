#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int CheckNum(int a[],int len,int result)
{
	int time = 0;
	for (int i = 0; i < len; i++){
		if (a[i] == result){
			time++;
		}
	}
	if (time * 2 <= len){
		return -1;
	}
	return 1;
}
int FindNum(int a[], int len)
{
	int time = 1;
	int result = a[0];
	for (int i = 0; i < len; i++){
		if (0 == time){
			result = a[i];
			time = 1;
		}
		else if (result == a[i]){
			time++;
		}
		else{
			time--;
		}
	}
	if (CheckNum(a, len, result) == -1){
		return -1;
	}
	return result;
}
int main()
{
	int arr[] = { 2, 4, 5, 8, 8, 8, 8, 1, 0, 2, 8, 8, 8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = FindNum(arr, len );
	if (ret == -1){
		printf("没有一个数字出现次数超过一半。\n");
	}
	else{
		printf("%d\n", ret);
	}
	system("pause");
	return 0;
}


//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int *)p1 > *(int *)p2);
//}
//int main()
//{
//	int arr[] = {1,3,3,2,2 };
//	int mid = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	qsort(arr, len, sizeof(int), int_cmp);
//	mid = arr[len / 2];
//	ret = CheckNum(arr, len, mid);
//		if (ret == -1){
//			printf("没有一个数字出现次数超过一半。\n");
//		}
//		else{
//			printf("%d\n", ret);
//		}
//	system("pause");
//	return 0;
//}