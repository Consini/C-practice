#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//5.一个整数n(n <= 100)可以有多种分划，分划整数之和为n。例如：
//输入n = 6
//6
//5 1
//4 2
//4 1 1
//3 3
//3 2 1
//3 1 1 1
//2 2 2
//2 2 1 1
//2 1 1 1 1
//1 1 1 1 1 1
//Total = 11{表示分划数有11种}
//求n的分划数。
//源代码：
#include<stdio.h>
#include<stdlib.h>
int divinteger(int n, int m);
int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("有%d种划分\n", divinteger(n, n));
	system("pause");
	return 0;
}
int divinteger(int n, int m)
{
	if (n<1 || m<1)
	{
		printf("error");
	}
	else
	if (n == 1 || m == 1)
	{
		return 1;
	}
	else
	if (n<m)
		return divinteger(n, n);
	else
	if (n == m)
		return 1 + divinteger(n, n - 1);
	else
		return divinteger(n, m - 1) + divinteger(n - m, m);
}
#endif