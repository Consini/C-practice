//#define _CRT_SECURE_NO_WARNINGS 1

//7.输入一个5位数以内的正整数，完成以下操作：
//①判断它是一个几位数。
//②请按序输出其各位数字。
//③逆序输出其各位数字。
//程序如下：
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int x, y, s[6], i = 0, j;
//	scanf("%d", &x);
//	if (x / 10000 != 0)
//		y = 5;
//	else if (x / 1000 != 0)
//		y = 4;
//	else if (x / 100 != 0)
//		y = 3;
//	else if (x / 10 != 0)
//		y = 2;
//	else y = 1;
//	printf("这是一个%d位数字\n", y);
//	while (y--)
//	{
//		s[i] = x % 10;
//		x = x / 10;
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--)   //正序输出
//	{
//		printf("%d ", s[j]);
//	}
//	printf("\n");
//	for (j = 0; j < i; j++)     //逆序输出
//	{
//		printf("%d ", s[j]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
