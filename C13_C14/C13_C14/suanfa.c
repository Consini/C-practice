#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define END_I 7
//#define END_J 7
//#define START_I 0
//#define START_J 0
//
////走迷宫
//int VistMaze(int maze[][8], int i, int j)
//{
//	int end = 0;
//	//假设能够走通
//	maze[i][j] = 2;
//	//如果到达重点则将end置为0表示迷宫已经走结束
//	if (i == END_I && j == END_J){
//		end = 1;
//	}
//	//如果迷宫没有走结束则将搜索所在位置的右、下、左、上四个方向是否能够走通
//	if (end != 1 && j + 1 <= END_J && maze[i][j + 1] == 0){		//右
//		if (VistMaze(maze, i, j + 1) == 1)
//			return 1;
//	}
//	if (end != 1 && i + 1 <= END_I && maze[i + 1][j] == 0){		//下
//		if (VistMaze(maze, i + 1, j) == 1)
//			return 1;
//	}
//	if (end != 1 && j - 1 >= START_J && maze[i][j - 1] == 0){	//左
//		if (VistMaze(maze, i, j - 1) == 1)
//			return 1;
//	}
//	if (end != 1 && i - 1 >= START_I && maze[i - 1][j] == 0){	//上
//		if (VistMaze(maze, i - 1, j) == 1)
//			return 1;
//	}	//当四周都不通的时候将其置回0
//	if (end != 1){
//		maze[i][j] = 0;
//	}
//
//	return end;
//}
//
//int main(void)
//{
//	//迷宫
//	int i, j;
//	int maze[8][8] = {
//		{ 0, 0, 0, 0, 0, 0, 0, 0 },
//		{ 0, 1, 1, 1, 1, 0, 1, 0 },
//		{ 0, 0, 0, 0, 1, 0, 1, 0 },
//		{ 0, 1, 0, 0, 0, 0, 1, 0 },
//		{ 0, 1, 0, 1, 1, 0, 1, 0 },
//		{ 0, 1, 0, 0, 0, 0, 1, 1 },
//		{ 0, 1, 0, 0, 1, 0, 0, 0 },
//		{ 0, 1, 1, 1, 1, 1, 1, 0 }
//	};
//	//打印出迷宫
//	printf("原迷宫：\n");
//	for (i = 0; i <= 18; i++)
//		printf("-");
//	printf("\n");
//	for (i = 0; i < 8; i++){
//		printf("|");
//		for (j = 0; j < 8; j++){
//			if (maze[i][j] == 1)
//				printf(" 1");
//			else
//				printf(" 0");
//		}
//		printf(" |\n");
//	}
//	for (i = 0; i <= 18; i++)
//		printf("-");
//	printf("\n");
//
//	if (VistMaze(maze, 0, 0) == 0){
//		printf("没有路径可走\n");
//		exit(0);
//	}
//
//	//打印出迷宫和路径
//	printf("迷宫和路径：\n");
//	for (i = 0; i <= 18; i++)
//		printf("-");
//	printf("\n");
//	for (i = 0; i < 8; i++){
//		printf(" |");
//		for (j = 0; j < 8; j++){
//			if (maze[i][j] == 1)
//				printf(" 1");
//			else if (maze[i][j] == 2)
//				printf(" 2");
//			else
//				printf(" 0");
//		}
//		printf(" |\n");
//	}
//	for (i = 0; i <= 18; i++)
//		printf("-");
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//#define LEFT 8
//#define RIGHT 8
//int maze[LEFT][RIGHT] = { { 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 1, 1, 1, 1, 0, 1, 0 },
//{ 0, 0, 0, 0, 1, 0, 1, 0 },
//{ 0, 1, 0, 0, 0, 0, 1, 0 },
//{ 0, 1, 0, 1, 1, 0, 1, 0 },
//{ 0, 1, 0, 0, 0, 0, 1, 1 },
//{ 0, 1, 0, 0, 1, 0, 0, 0 },
//{ 0, 1, 1, 1, 1, 1, 1, 0 } };
//struct
//{
//	int x;
//	int y;
//	int pre;
//}sp[100];
//int fx[] = { 1, -1, 0, 0 };
//int fy[] = { 0, 0, 1, -1 };
//int ph, pe, i, j, k;
//
//void out()
//{
//	printf("(%d,%d)", sp[ph].x + 1, sp[ph].y + 1);
//	while (sp[ph].pre)
//	{
//		ph = sp[ph].pre;
//		printf("--(%d,%d)", sp[ph].x + 1, sp[ph].y + 1);
//	}
//	printf("\n");
//}
//
//int check(int i, int j)
//{
//	if (i < 0 || i >= LEFT || j < 0 || j >= RIGHT)
//		return 0;
//	if (maze[i][j] == 1)
//		return 0;
//	return 1;
//}
//void search()
//{
//	ph = 1;
//	pe = 0;//父亲节点
//	sp[0].x = 0;
//	sp[0].y = 0;
//	sp[0].pre = 0;
//	maze[0][0] = 1;
//	while (1)
//	{
//		pe++;
//		for (k = 0; k < 4; k++)
//		{
//			i = sp[pe].x + fx[k];
//			j = sp[pe].y + fy[k];
//			if (check(i, j) == 1)
//			{
//				ph++;
//				sp[ph].x = i;
//				sp[ph].y = j;
//				sp[ph].pre = pe;
//				maze[i][j] = 1;
//				if (sp[ph].x == LEFT - 1 && sp[ph].y == RIGHT - 1)
//				{
//					out();
//					return;
//				}
//
//			}
//		}
//	}
//}
//int main()
//{
//	search();
//	system("pause");
//	return 0;
//}