#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//��������������̵�����
//��n*m�������У���ֻ���ߡ��ա��֡����λ��(x, y)�������������̵�ÿһ����һ�Σ���ֻ��һ�Ρ��ҳ�����·����
#include <stdio.h>
#include<stdlib.h>
int  n = 5, m = 4;
int  fx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int fy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }, a[5][4];
int dep, x, y, count;
void output()
{
	count++;
	printf("\ncount=%d", count);
	for (y = 0; y<n; y++)
	{
		printf("\n");
		for (x = 0; x<m; x++)
			printf("%3d  ", a[y][x]);
	}
	printf("\n");
}
void find(int x, int y, int dep)
{
	int i, xx, yy;
	for (i = 0; i<8; i++)     //���Ϸ�������,�γ��µ����� 
	{
		xx = x + fx[i];
		yy = y + fy[i];
		if (check(xx, yy) == 1)  //�ж��������Ƿ����,�Ƿ�����
		{
			a[xx][yy] = dep;      //�����µ�����
			if (dep == n*m)
				output();
			else
				find(xx, yy, dep + 1);//�����������,�ݹ���һ��
			a[xx][yy] = 0;
		}
	}
}
int check(int x, int y)
{
	if (x >= 0 && x<n&&y >= 0 && y<m&&a[x][y] == 0)
		return 1;
	else
		return 0;
}
void main()
{
	int i, j;
	count = 0;
	dep = 1;
	printf("������x y������: ");
	scanf("%d%d", &x, &y);
	if (x >= n || y >= m || x<0 || y<0)
	{
		printf("�����������������������:\n");
		scanf("%d%d", &x, &y);
	}
	for (i = 0; i<n; i++)
	for (j = 0; j<m; j++)
		a[i][j] = 0;
	a[x][y] = 1;
	find(x, y, 2);
	if (count == 0)
		printf("No solution!\n");
	else
		printf("count=%d", count);
	system("pause");
}
#endif