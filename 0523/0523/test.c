#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void *My_memmove(void *dst,const void *src,int num)
//{
//	assert(src);
//	assert(dst);
//	char *_dst = (char *)dst;
//	char *_src = (char *)src;
//
//	if (_dst > _src && _dst < _src + num){
//		_dst += num - 1;
//		_src += num - 1;
//		while (num--){
//			*_dst = *_src;
//			_dst--;
//			_src--;
//		}
//	}
//	else{
//		while (num--){
//			*_dst = *_src;
//			_dst++;
//			_src++;
//		}
//	}
//	return dst;
//}
struct S3
{
	double d;
	char c;
	int i;
};
//练习4-结构体嵌套问题
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct S4));

	//char *src = "hello bit!";
	//char dst[32];
	//My_memmove(dst, src, strlen(src) + 1);
	////printf(dst);
	//printf("%s\n", dst);
	system("pause");
	return 0;
}







#if 0
#include<stdio.h>
#include<stdlib.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for ( j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{


	//int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//print_arr1(arr, 3, 5);
	//print_arr2(arr, 3, 5);
	//char a[1000];
	//int i;
	//for (i = 0; i<1000; i++)
	//{
	//	a[i] = -1 - i;
	//}
	//printf("%d", strlen(a));
	
	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}
	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n", i + j);
	//char a = 128;
	//printf("%d\n", a);
	//char a = -128;
	//printf("%u\n", a);
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("a=%d,b=%d,c=%d", a, b, c);
	//unsigned int a = 1;
	//*(unsigned char*)&a;
	system("pause");
	return 0;
}
#endif