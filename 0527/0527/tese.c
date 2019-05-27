#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ROW 4
#define COL 4
void show(int(*a)[COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%2d  ", a[i][j]);
		}
		printf("\n");
	}
	return;
}
void PrintCircle(int(*a)[COL], int row, int col, int start)
{
	int endx = col - 1 - start;
	int endy = row - 1 - start;
	//从左到右
	for (int j = start; j <= endx; j++){
		printf("%d ", a[start][j]);
	}
	//从上到下
	if (endy > start){
		for (int i = start + 1; i <= endy; i++){
			printf("%d ", a[i][endx]);
		}
	}
	//从右到左
	if (endx > start && endy > start){
		for (int j = endx - 1; j >= start; j--){
			printf("%d ", a[endy][j]);
		}
	}
	//从下到上
	if ((endx + 2) > endy && endy > start){
		for (int i = endy - 1; i >= start + 1; i--){
			printf("%d ", a[i][start]);
		}
	}
	return;
}
void Print(int(*a)[COL], int row, int col)
{
	int start = 0;
	if (a == NULL || row <= 0 || col <= 0){
		return;
	}
	while (start * 2 < row && start * 2 < col){
		PrintCircle(a, row, col, start);
		start++;
	}
	return;
}
int main()
{
	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	show(a, ROW, COL);
	Print(a, ROW, COL);
	printf("\n");
	system("pause");
	return 0;
}