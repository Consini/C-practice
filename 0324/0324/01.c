#define _CRT_SECURE_NO_WARNINGS 1
//Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;//几项数字  3
//	int a = 0;//键盘输入的数字  2
//	int i = 0;
//	int sum = 0;//和  2+22+222
//	int tmp = 0;//前几项的  2  2+22  2+22+222
//	scanf("%d%d",&n,&a);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a; //2  22  222
//		sum += tmp; //2   2+22  2+22+222
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}



#if 0
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,n;
	for (i = 100; i < 1000; i++)
	{
		n = pow(i % 10, 3) + pow((i % 100) / 10, 3) + pow(i / 100, 3);
		if (n == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
#endif



#if 0
//打印菱形
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0, j;
	scanf("%d", &line);
	//上半部分
	for (i = 0; i < line; i++)
	{
		//打印空格
		for (j = 0; j< line - 1 - i; j++)
		//for (j = 0; j< line - 1 ; j++)
		{
			printf(" ");
			//line--;
		}
		//打印*号
		for (j = 0; j< 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < line-1; i++)
	{
		//for (j = 0; j< i+1; j++)
		for (j = 0; j<= i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j< 2 * (line-i-1)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif






