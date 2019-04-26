#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//象棋中马遍历棋盘的问题
//在n*m的棋盘中，马只能走“日”字。马从位置(x, y)处出发，把棋盘的每一格都走一次，且只走一次。找出所有路径。
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
	for (i = 0; i<8; i++)     //加上方向增量,形成新的坐标 
	{
		xx = x + fx[i];
		yy = y + fy[i];
		if (check(xx, yy) == 1)  //判断新坐标是否出界,是否已走
		{
			a[xx][yy] = dep;      //走向新的坐标
			if (dep == n*m)
				output();
			else
				find(xx, yy, dep + 1);//从新坐标出发,递归下一层
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
	printf("请输入x y的坐标: ");
	scanf("%d%d", &x, &y);
	if (x >= n || y >= m || x<0 || y<0)
	{
		printf("输入的坐标有误，请重新输入:\n");
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