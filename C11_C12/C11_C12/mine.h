
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
void Menu();//�˵�
void Game();
void SetMine(char mine[][COL],int row,int col);//����
void Play(char show[][COL], char mine[][COL] ,int row, int col);//��Ϸ
void Print(char show[][COL], int row, int col);//��ӡ����
int GetMineNum(char mine[][COL], int x, int y);//�����Χ�׵ĸ���
void Expend(char mine[][COL], char show[][COL], int x, int y);//��չ���׵�����
void Rmove(char mine[ROW][COL], int x, int y);//�ƶ��׵�λ��
#endif

//#endif