#ifndef _FIVECHESS_H_
#define _FIVECHESS_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 10
#define COL 10
void Menu();//打印菜单
void Game();
void Computer(char board[][COL], int row, int col);//电脑下棋
void Show(char board[][COL], int row, int col);//棋盘展示
char Judge(char board[][COL], int row, int col);//判断输赢
void Player(char board[][COL], int row, int col);//玩家下棋
#endif