#define _CRT_SECURE_NO_WARNINGS 1
// 0 '\0' '0' NULL 









#if 0
//�ݹ�ʵ�ֶ��ֲ���
#include<stdio.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	//int arr[]������������ַ�����ں����ڲ�����int right = sizeof(arr) / sizeof(arr[0])- 1;��right=1��
	while (left <= right)
	{
		int mid = left + (right - left) / 2; //����while�ڲ���mid��ֵҪ�ı�
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	system("pause");
	return 0;
}
#endif



//���ֲ���
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	//int arr[]������������ַ�����ں����ڲ�����int right = sizeof(arr) / sizeof(arr[0])- 1;��right=1��
	while (left <= right)
	{
		int mid = left + (right - left) / 2; //����while�ڲ���mid��ֵҪ�ı�
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	system("pause");
	return 0;
}
#endif





#if 0
//ת���ַ�--���ú���
#include<stdio.h>
char translation(ch)
{
	while ((ch = getchar()) != EOF)//end of file(���������)�ļ��Ľ�β��<stdio.h>�ļ��ж���Ϊ-1   ctr+z�˳�����ctr+cֱ�ӽ���
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
//C������ȱ��  ������C++   ����Ա���������� ��һ��������������ʮ��
//ת���ַ�
//getchar()�ķ�������Ϊʲô��int��   �ø���Χ�����int �ͽ��գ�ʹ��������Ƚ�
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//end of file�ļ��Ľ�β����-1   ctr+z�˳�����ctr+cֱ�ӽ���
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

