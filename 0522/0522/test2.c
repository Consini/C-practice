#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void Print(int arr[], int len)
{
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
int Reorder(int *arr, int len, int (*fun)(int))//int (*fun)(int)为函数指针
{
	int left = 0;
	int right = len - 1;
	assert(arr);
	while (left < right){
		while ((left < right) && fun(arr[left])){
			left++;
		}
		while ((left < right) && !fun(arr[right])){
			right--;
		}
		if (left < right){
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	//int *left = arr;
	//int *right = arr + len - 1;
	//assert(arr);
	//while (left < right){
	//	while ((left < right) && fun(*left)){
	//		left++;
	//	}
	//	while ((left < right) && !fun(*right)){
	//		right--;
	//	}
	//	if (left < right){
	//		int tmp = *left;
	//		*left = *right;
	//		*right = tmp;
	//	}
	//}
	return;
}
//return 1的值放在数组前面，return 0的放在数组后面
int isEven(int n)//偶数
{
	return (n & 1) == 0;
}
int isOdd(int n)//奇数
{
	return (n & 1) == 1;
}
int isThree(int n)//能否被3整除
{
	return (n % 3) == 0;
}
void Adjust(int *arr, int length)
{
	//Reorder(arr, length, isEven);//偶数在前
	Reorder(arr, length, isOdd);//奇数在前
	//Reorder(arr, length, isThree);//能被3整除的在前
}
int main()
{
	int a[] = { 2, -18, 1, 0, -3, 5, 3, 18, -8, 9 };
	int len = sizeof(a) / sizeof(a[0]);
	Print(a, len);
	Adjust(a, len);
	Print(a, len);
	system("pause");
	return 0;
}



//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void Print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return;
//}
//void Adjust(int arr[], int length)
//{
//	int left = 0;
//	int right = length - 1;
//	assert(arr);
//	while (left < right){
//		while ((left < right) && (arr[left] & 1)){
//			left++;
//		}
//		while ((left < right) && !(arr[right] & 1)){
//			right--;
//		}
//		if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	return;
//}
//int main()
//{
//	int a[] = { 2, 8, 1, 0, 3, 5, 2, 7, 8, 9 };
//	int len = sizeof(a) / sizeof(a[0]);
//	Print(a, len);
//	Adjust(a, len);
//	Print(a, len);
//	system("pause");
//	return 0;
//}