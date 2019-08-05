#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int binarySearch1(int a[],int len, int v){
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (v == a[mid]) {
			return mid;
		}
		else if (v < a[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int result = binarySearch1(a, 10, 9);
	printf("%d\n", result);
	//int i = 0;
	//for (i = 100; i <= 200; i += 2){
	//	int j = 0;
	//	for (j = 2; j <= i / 2; j++){
	//		if (i % j == 0){
	//			break;
	//		}
	//	}
	//	if (j > i / 2){
	//		printf("%d ",i);
	//	}
	//}
	//double i;
	//int flag = -1;
	//double sum = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	flag = -flag;
	//	sum = flag*(1 / i) + sum;
	//}
	//printf("%f\n", sum);
	system("pause");//暂停函数，程序运行过快，需要停一下以便更好看清运行结果
	return 0;
}
