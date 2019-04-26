//#define _CRT_SECURE_NO_WARNINGS 1
//5.编写一个算法对输入的一个整数，判断它能否被4, 7, 9整除，并输出以下信息之一：
//能同时被4, 7, 9，整除；
//能被其中两个数（要指出哪两个）整除；
//能被其中一个数（要指出哪一个）整除；
//不能被4, 7, 9, 任一个整除。
//程序如下：
//#include<stdio.h>
//#include<stdlib.h>
//void print(int num)
//{
//	if (num % 4 == 0) printf("4 ");
//	if (num % 7 == 0) printf("7 ");
//	if (num % 9 == 0) printf("9 ");
//}
//int main()
//{
//	int num;
//	int count = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	if (num % 4 == 0)
//	{
//		count++;
//	}
//	if (num % 7 == 0)
//	{
//		count++;
//	}
//	if (num % 9 == 0)
//	{
//		count++;
//	}
//	switch (count)
//	{
//	case 0:
//		printf("%d不能被4，7，9任一个整数除\n", num);
//		break;
//	case 1:
//		printf("%d只能被其中一个数整除\n", num);
//		print(num);
//		printf("\n");
//		break;
//	case 2:
//		printf("%d能同时被其中的2个数整除\n", num);
//		print(num);
//		printf("\n");
//		break;
//	case 3:
//		printf("%d能同时被4，7，9整除\n", num);
//		break;
//	default:
//		exit(0);
//		break;
//	}
//	system("pause");
//	return 0;
//}
