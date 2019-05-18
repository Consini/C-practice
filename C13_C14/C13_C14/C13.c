#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//剑指offer
//杨氏矩阵
#include<stdio.h>
#include<stdlib.h>
int Find(const int a[][3], int k)
{
	int i = 0;
	int j = 2;
	if (k < a[0][0] || k > a[3][3]){
		return 0;
	}
	while (i<3 && j>=0){
		if (k > a[i][j]){
			i++;
		}
		else if (k < a[i][j]){
			j--;
		}
		else{
			return k;
		}
	}
	return 0;
}
void Print(int *arr, int row, int col)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			printf("%d ", arr[i*col + j]);
		}
	}
	printf("\n");
}
int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 0;
	int ret = 0;
	Print((int *)a, 3, 3);
	//scanf("%d", &k);
	ret = Find(a, 5);
	if (ret){
		printf("Find the number!\n");
	}
	else
	{
		printf("Not find the number!\n");
	}
	system("pause");
	return 0;
}






//调整数组使奇数全部都位于偶数前面。 
#include<stdio.h>
#include<stdlib.h>
void Adjust(int *arr, int len)
{
	int *left = arr;
	int *right = arr+len-1;
	while (left < right)
	{
		while ((*left % 2 == 1) && (left < right)){
			left++;
		}
		while ((*right % 2 == 0) &&(left < right)){
			right--;
		}
		if (left < right){
			int tmp = 0;
			tmp = *right;
			*right = *left;
			*left = tmp;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	printf("请输入数组元素:");
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	Adjust(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);//*(arr+i)   []自带解引用
	}
	system("pause");
	return 0;
}


//调整数组使奇数全部都位于偶数前面。 
#include<stdio.h>
#include<stdlib.h>
void Tiaozheng(int* arr, int len) 
{
	int* left = arr;
	int* right = arr+len - 1;
	while (left < right){
		while (*left % 2 == 1 && left < right){
			left++;
		}
		while (left < right && *right % 2 == 0){
			right--;
		}
		if (left < right){
			int tmp = *right;
			*right = *left;
			*left = tmp;
		}
	}
	return;
}
void Show(int * arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", *(arr + i));
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Tiaozheng(arr, len);
	Show(arr, len);
	system("pause");
	return 0;
}
#endif



