#ifndef _FIVECHESS_H_
#define _FIVECHESS_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 10
#define COL 10
void Menu();//��ӡ�˵�
void Game();
void Computer(char board[][COL], int row, int col);//��������
void Show(char board[][COL], int row, int col);//����չʾ
char Judge(char board[][COL], int row, int col);//�ж���Ӯ
void Player(char board[][COL], int row, int col);//�������
#endif