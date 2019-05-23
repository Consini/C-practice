#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
void Print_int(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
void Print_char(char arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
	return;
}
//void int_cmp(const void *a, const void *b)
//{
//	int *pa = (int *)a;
//	int *pb = (int *)b;
//	if (*pa > *pb){
//		return 1;
//	}
//	else if (*pa < *pb){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//void char_cmp(const void *a, const void *b)
//{
//	return (*(char *)a - *(char *)b);
//}
void cmp(const void *a, const void *b)
{
	return (*(char *)a - *(char *)b);
}
void Swap(char *p1, char *p2, int size)
{
	for (int i = 0; i < size; i++){
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
	return;
}
void bubble(void *arr, int count, int size, int cmp(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count-1; i++){
		for (j = 0; j < count - 1 - i; j++){
			if (cmp((char *)arr + j*size, (char *)arr + (j + 1)*size)<0)
			{
				Swap((char *)arr + j*size, (char *)arr + (j + 1)*size, size);
			}
		}
	}
}
#endif
int main()
{


	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  3*4*4
	printf("%d\n", sizeof(a[0][0]));//4  第一个数组的第一个元素
	printf("%d\n", sizeof(a[0]));//16   第一个数组    
	printf("%d\n", sizeof(a[0] + 1));//4   第一个数组的第二个元素
	printf("%d\n", sizeof(*(a[0] + 1)));//4   第一个数组的第二个元素
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16  
	printf("%d\n", sizeof(*a));//16   第一个数组 
	printf("%d\n", sizeof(a[3]));//16  

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4  字符串首元素地址
	//printf("%d\n", sizeof(p + 1));//4  第二个元素地址
	//printf("%d\n", sizeof(*p));//1  第一个元素
	//printf("%d\n", sizeof(p[0]));//1  第一个元素
	//printf("%d\n", sizeof(&p));//4   字符串地址
	//printf("%d\n", sizeof(&p + 1));//4  下一个字符串地址
	//printf("%d\n", sizeof(&p[0] + 1));//4   第二个元素地址

	//printf("%d\n", strlen(p));//6    数组的长度，不包括\0
	//printf("%d\n", strlen(p + 1));//5   从第一个元素开始到\0
	////printf("%d\n", strlen(*p));//错误
	////printf("%d\n", strlen(p[0]));//错误
	//printf("%d\n", strlen(&p));//错误or不确定的值
	//printf("%d\n", strlen(&p + 1));//    不确定的值，下一个字符串长度
	//printf("%d\n", strlen(&p[0] + 1));//5    从第二个元素开始到\0


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  数组大小，以\0结尾
	//printf("%d\n", sizeof(arr + 0));//4  数组首元素的地址
	//printf("%d\n", sizeof(*arr));//1  第一个元素
	//printf("%d\n", sizeof(arr[1]));//1   第二个元素
	//printf("%d\n", sizeof(&arr));//4  整个数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4  下一个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4  第二个元素的地址

	//printf("%d\n", strlen(arr));//6  数组的长度，不包括\0
	//printf("%d\n", strlen(arr + 0));//6   从第一个元素开始到\0
	////printf("%d\n", strlen(*arr));//错误
	////printf("%d\n", strlen(arr[1]));//错误
	//printf("%d\n", strlen(&arr));//6  有告警，此处arr代表整个数组的地址，数值上与首元素地址相同
	//printf("%d\n", strlen(&arr + 1));//不确定的值
	//printf("%d\n", strlen(&arr[0] + 1));//5  从第二个元素开始到\0


	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6  arr是整个数组，长度为6
	//printf("%d\n", sizeof(arr + 0));//4  第一个元素的地址
	//printf("%d\n", sizeof(*arr));//1  第一个元素
	//printf("%d\n", sizeof(arr[1]));//1  第二个元素
	//printf("%d\n", sizeof(&arr));//4   整个数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4  下一个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4   第二个元素的地址

	////strlen(char *)，求字符串长度，以\0结束
	////arr数组中没有\0，因此顺序往后找直至遇到\0结束
	//printf("%d\n", strlen(arr));//不确定的值
	//printf("%d\n", strlen(arr + 0));//不确定的值
	////printf("%d\n", strlen(*arr));//错误
	////printf("%d\n", strlen(arr[1]));//错误
	//printf("%d\n", strlen(&arr));//不确定的值
	//printf("%d\n", strlen(&arr + 1));//不确定的值
	//printf("%d\n", strlen(&arr[0] + 1));//不确定的值


	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16  sizeof(数组名)中a代表整个数组，大小为4*4=16
	//printf("%d\n", sizeof(a + 0));//4   数组第一个元素的地址
	//printf("%d\n", sizeof(*a));//4  第一个元素
	//printf("%d\n", sizeof(a + 1));//4  第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4  第二个元素相当于 *(a+1)
	//printf("%d\n", sizeof(&a));//4  &数组名，数组名代表整个数组的地址，地址的大小为4
	//printf("%d\n", sizeof(*&a));//16  整个数组
	//printf("%d\n", sizeof(&a + 1));//4  下一个数组的地址
	//printf("%d\n", sizeof(&a[0]));//4   第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4  第二个元素的地址
	system("pause");
	return 0;
}
//int main()
//{
//	int arr[] = { 2, 5, 7, 2, 1, 0, 9, 34, 21 };
//	char c[] = { 'a', 'p', 'o', 'y', 'd', 'f','k','z','m'};
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	bubble(c, sizeof(c) / sizeof(c[0]), sizeof(char), cmp);
//	Print_int(arr, sizeof(arr) / sizeof(arr[0]));
//	Print_char(c, sizeof(c) / sizeof(c[0]));
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	qsort(c, sizeof(c) / sizeof(c[0]), sizeof(char), cmp);
//	Print_int(arr, sizeof(arr) / sizeof(arr[0]));
//	Print_char(c, sizeof(c) / sizeof(c[0]));
//	system("pause");
//	return 0;
//}