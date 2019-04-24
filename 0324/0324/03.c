#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		int count = 0;
//		int sum = 0;//必须放在for语句内部，每次循环初始化为0,
//		int tmp;
//		tmp = i;
//		//判断i是几位数字
//		while (tmp != 0)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//求各个位上的数字并求和
//		tmp = i;
//		while (tmp != 0)
//		{
//			sum += pow((tmp % 10), count);
//			tmp = tmp/10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//







#if 0
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;//几项数字相加，如三项2+22+222
	int a;//数字几，如2
	int i = 0;
	int tmp = 0, sum = 0;
	scanf("%d%d", &n, &a);
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;//总和
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
#endif




#if 0
//1.在屏幕上输出以下图案
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	scanf("%d", &line);
	//上半部分
	for (i = 0; i <= line; i++)
	{
		//打印空格
		for (j = 0; j <= line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*号
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i <= line - 1; i++)
	{
		//打印空格
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*号
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif






//int is_leap_year(int y)
//{
//	return(((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0));
//	/*if ((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0)
//	{
//		return 1;
//	}
//		return 0;*/
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}





//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= i / 2; j += 2)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < -200; i++)
//	{
//		if (is_prime(i) == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	system("pause");
//}
