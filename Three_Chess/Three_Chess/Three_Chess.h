#ifndef _THREE_CHESS_H
#define _THREE_CHESS_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define ROW 3
#define COL 3
void Menu();
void Game();
void ComputerMove(char board[][COL], int row, int col);
void PlayerMove(char board[][COL], int row, int col);
char Judge(char board[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
#endif