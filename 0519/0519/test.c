#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//杨氏矩阵
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Findnum1(int arr[][4], int row, int col, int num)
{
	int i = 0;
	int j = col - 1;
	if (num > arr[row-1][col-1] || num < arr[0][0]){
		return 0;
	}
	while (i < row - 1 && j >= 0){
		if (arr[i][j] > num){
			j--;
		}
		else if (arr[i][j] < num){
			i++;
		}
		else{
			return num;
		}
	}
	return 0;
}
int Findnum2(int arr[][4], int num){
	int i = 3;
	int j = 0;
	if (num > arr[3][3] || num < arr[0][0]){
		return 0;
	}
	while (i >= 0 && j <= 3){
		if (num > arr[i][j]){
			j++;
		}
		else if (num < arr[i][j]){
			i--;
		}
		else{
			return num;
		}
	}
	return 0;
}
int main()
{
	int a[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int ret = 0;
	//ret = Findnum1(a,4,4, 80);//右上角开始查找
	ret = Findnum2(a, 8);//左下角开始查找
	if (ret){
		printf("找到数字%d\n", ret);
	}
	else{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
#endif