
//#if 0
#ifndef _MINE_H_
#define _MINE_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 12
#define COL 12
#define MINE 15
void Menu();//菜单
void Game();
void SetMine(char mine[][COL],int row,int col);//布雷
void Play(char show[][COL], char mine[][COL] ,int row, int col);//游戏
void Print(char show[][COL], int row, int col);//打印界面
int GetMineNum(char mine[][COL], int x, int y);//获得周围雷的个数
void Expend(char mine[][COL], char show[][COL], int x, int y);//扩展无雷的区域
void Rmove(char mine[ROW][COL], int x, int y);//移动雷的位置
#endif

//#endif