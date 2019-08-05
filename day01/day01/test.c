#define _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include<stdio.h>
int FindNum(int a[][4], int num){
	int i = 0;
	int j = 3;
	if (num > a[3][3] || num < a[0][0]){
		return -1;
	}
	while (i >= 0 && j <= 3){
		if (a[i][j] == num){
			return num;
		}
		else if (a[i][j] > num){
			j--;
		}
		else{
			i++;
		}
	}
	return -1;
}
int main(){
	int arr[][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int result = FindNum(arr, 89);
	if (result == -1){
		printf("很抱歉，没有找到该数字!\n");
	}
	else{
		printf("恭喜你，找到了!\n");
	}
	system("pause");
}
