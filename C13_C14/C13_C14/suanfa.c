#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define END_I 7
//#define END_J 7
//#define START_I 0
//#define START_J 0
//
////���Թ�
//int VistMaze(int maze[][8], int i, int j)
//{
//	int end = 0;
//	//�����ܹ���ͨ
//	maze[i][j] = 2;
//	//��������ص���end��Ϊ0��ʾ�Թ��Ѿ��߽���
//	if (i == END_I && j == END_J){
//		end = 1;
//	}
//	//����Թ�û���߽�������������λ�õ��ҡ��¡������ĸ������Ƿ��ܹ���ͨ
//	if (end != 1 && j + 1 <= END_J && maze[i][j + 1] == 0){		//��
//		if (VistMaze(maze, i, j + 1) == 1)
//			return 1;
//	}
//	if (end != 1 && i + 1 <= END_I && maze[i + 1][j] == 0){		//��
//		if (VistMaze(maze, i + 1, j) == 1)
//			return 1;
//	}
//	if (end != 1 && j - 1 >= START_J && maze[i][j - 1] == 0){	//��
//		if (VistMaze(maze, i, j - 1) == 1)
//			return 1;
//	}
//	if (end != 1 && i - 1 >= START_I && maze[i - 1][j] == 0){	//��
//		if (VistMaze(maze, i - 1, j) == 1)
//			return 1;
//	}	//�����ܶ���ͨ��ʱ�����û�0
//	if (end != 1){
//		maze[i][j] = 0;
//	}
//
//	return end;
//}
//
//int main(void)
//{
//	//�Թ�
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
//	//��ӡ���Թ�
//	printf("ԭ�Թ���\n");
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
//		printf("û��·������\n");
//		exit(0);
//	}
//
//	//��ӡ���Թ���·��
//	printf("�Թ���·����\n");
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
//	pe = 0;//���׽ڵ�
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