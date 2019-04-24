#define _CRT_SECURE_NO_WARNINGS 1
// 0 '\0' '0' NULL 









#if 0
//递归实现二分查找
#include<stdio.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	//int arr[]代表的是数组地址，若在函数内部定义int right = sizeof(arr) / sizeof(arr[0])- 1;则right=1。
	while (left <= right)
	{
		int mid = left + (right - left) / 2; //放在while内部，mid的值要改变
		if (arr[mid] < k)
		{
			return binary(arr,k,mid+1,right);
		}
		else if (arr[mid] > k)
		{
			return binary(arr, k,left,mid-1);
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = binary(arr, 6, left, right);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	system("pause");
	return 0;
}
#endif



//二分查找
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	//int arr[]代表的是数组地址，若在函数内部定义int right = sizeof(arr) / sizeof(arr[0])- 1;则right=1。
	while (left <= right)
	{
		int mid = left + (right - left) / 2; //放在while内部，mid的值要改变
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = binary(arr, 3, left, right);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	system("pause");
	return 0;
}
#endif





#if 0
//转换字符--调用函数
#include<stdio.h>
char translation(ch)
{
	while ((ch = getchar()) != EOF)//end of file(输入结束符)文件的结尾在<stdio.h>文件中定义为-1   ctr+z退出程序，ctr+c直接结束
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
			;
	}
}
int main()
{
	char ch = 0;
	char m = translation(ch);
	return 0;
}
#endif


#if 0
//C陷阱与缺陷  高质量C++   程序员的自我修养 第一，二，三，六，十章
//转换字符
//getchar()的返回类型为什么是int？   用更大范围区间的int 型接收，使程序更加稳健
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//end of file文件的结尾代表-1   ctr+z退出程序，ctr+c直接结束
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch -32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
			;
	}
	
	return 0;
}
#endif

