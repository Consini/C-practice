#define _CRT_SECURE_NO_WARNINGS 1
//12.一个正整数有可能可以被表示为n(n >= 2)个连续正整数之和，如n = 15时
//15 = 1 + 2 + 3 + 4 + 5
//15 = 4 + 5 + 6
//15 = 7 + 8
//请编写算法，根据输入的任何一个正整数，找出符合这种要求的所有连续正整数序列。
//源代码：
#include<stdio.h> 
#include<stdlib.h>
void try(int n);
int main()
{
	int n;
	scanf("%d", &n);
	try(n);
	system("pause");
	return 0;
}
void try(int n)
{
	int i;
	int sum = 0;
	int first = 1, end = 1;
	while (end <= n / 2 + 2)
	{
		if (sum<n)
		{
			sum += end;
			end++;
		}
		else
		if (sum == n)
		{
			for (i = first; i < end; i++)
			{
				printf("%d ", i);
			}
			printf("\n");
			sum += end;
			end++;
		}
		else
		if (sum>n)
		{
			first++;
			sum -= (first - 1);
		}
	}
}
