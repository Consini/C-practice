#define _CRT_SECURE_NO_WARNINGS 1
//12.һ���������п��ܿ��Ա���ʾΪn(n >= 2)������������֮�ͣ���n = 15ʱ
//15 = 1 + 2 + 3 + 4 + 5
//15 = 4 + 5 + 6
//15 = 7 + 8
//���д�㷨������������κ�һ�����������ҳ���������Ҫ��������������������С�
//Դ���룺
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
