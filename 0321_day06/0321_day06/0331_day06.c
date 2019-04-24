#define _CRT_SECURE_NO_WARNINGS 1
#include "0331_day06.h"
int Exchangenum(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}


int IsLeepYear2(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
	{
		return 1;
	}	
	return 0;
}

void IsLeepYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
	{
		printf("%d是闰年\n",year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
}

int IsPrime(int num)
{
	int i = 0;
	for (i = 2; i <=sqrt((double)num); i++)
	{
		if (0 == num%i)
		{
			printf("%d不是素数\n", num);
			break;
		}
	}
	if (i > sqrt((double)num))
	{
		printf("%d是素数\n", num);
	}
}

int IsPrime2(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt((double)num); i++)
	{
		if (0 == num%i)
		{
			return 0;
		}
	}
	return 1;
}

void MtTable(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
//输出数组
void Output(int arr[],int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(arr+i));
		//printf("%d ", arr[i]);
	}
	printf("\n");
}
//初始化数组
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}
//清空数组
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] =0;
	}
}
//数组元素逆置
void Reverse(int arr[], int len)
{
	int i = 0;
	int j = len-1;
	int tmp = 0;
	for (i = 0; i < j / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[j-i];
		arr[j-i] = tmp;
	}
}
void Swap(int *arr,int left, int right)
{
	int tmp = 0;
	tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
}
void Reverse3(int* arr, int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		Swap(arr,left,right);
		left++;
		right--;
	}
}

void Reverse2(int* arr, int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}



int Find(int arr[],int len)
{
	int i;
	int tmp = 0;
	for (i = 0; i < len; i++)
	{
		tmp ^= arr[i];
	}
	return tmp;
}
