#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//11.设有A, B, C, D, E5人从事J1，J2, J3, J4, J5 5项工作，每人只能从事一项，他们的效益如图所示，求最佳安排使效益最高。
//J1	J2	J3	J4	J5
//A	10	11	10	4	7
//B	13	10	10	8	5
//C	5	9	7	7	4
//D	15	12	10	11	5
//E	10	11	8	8	4
#include<stdio.h> 
#include<stdlib.h>
#define N 5 
int a[N];
int c[N * 2], d[N * 2];
int buf[N][N] = {
	{ 10, 11, 10, 4, 7 },
	{ 13, 10, 10, 8, 5 },
	{ 5, 9, 7, 7, 4 },
	{ 15, 12, 10, 11, 5 },
	{ 10, 11, 8, 8, 4 }
};
int max = 0;
int maxa[N];
void try(int t);
void swap(int t1, int t2);
int main()
{
	int i;
	for (i = 0; i<N; i++)
		a[i] = i;
	for (i = 0; i<N; i++)
	{
		c[i] = 0;
		c[N + i] = 0;
		d[i] = 0;
		d[N + i] = 0;
	}
	try(0);
	printf("max=%d\n", max);
	printf("A B C D E\n");
	for (i = 0; i<N; i++)
		printf("%d ", maxa[i]);
	printf("\n");
	system("pause");
	return 0;
}
void try(int t)
{
	int j;
	if (t >= N)
	{
		int i;
		int sum = 0;
		for (i = 0; i<N; i++)
			sum += buf[i][a[i]];
		if (sum>max)
		{
			max = sum;
			for (i = 0; i<N; i++)
				maxa[i] = a[i];
		}
	}
	else
	{
		for (j = t; j<N; j++)
		{
			swap(t, j);
			if (c[t + a[t]] == 0 && d[t - a[t] + N] == 0)
			{
				c[t + a[t]] = 1;
				d[t - a[t] + N] = 1;
				try(t + 1);
				c[t + a[t]] = 0;
				d[t - a[t] + N] = 0;
			}
			swap(t, j);
		}
	}
}
void swap(int t1, int t2)
{
	int t;
	t = a[t1];
	a[t1] = a[t2];
	a[t2] = t;
}
#endif