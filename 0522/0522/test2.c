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
int Reorder(int *arr, int len, int (*fun)(int))//int (*fun)(int)Ϊ����ָ��
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
//return 1��ֵ��������ǰ�棬return 0�ķ����������
int isEven(int n)//ż��
{
	return (n & 1) == 0;
}
int isOdd(int n)//����
{
	return (n & 1) == 1;
}
int isThree(int n)//�ܷ�3����
{
	return (n % 3) == 0;
}
void Adjust(int *arr, int length)
{
	//Reorder(arr, length, isEven);//ż����ǰ
	Reorder(arr, length, isOdd);//������ǰ
	//Reorder(arr, length, isThree);//�ܱ�3��������ǰ
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