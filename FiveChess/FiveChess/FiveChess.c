#define _CRT_SECURE_NO_WARNINGS 1
#include "FiveChess.h"
void Menu()//打印菜单
{
		printf("----------------------\n");
		printf("-----   1.play   -----\n");
		printf("-----   2.exit   -----\n");
		printf("----------------------\n");
		printf("Please enter your select:");
}
void Computer(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1){
		i = rand() % row;
		j = rand() % row;
		if (' ' == board[i][j]){
			board[i][j] = 'X';
			break;
		}
	}
}
void Show(char board[][COL], int row, int col)
{
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|\n");
	printf("---------------------------------------------\n");
	for (int i = 0; i < row; i++){
		printf("%2d |", i + 1);
		for (int j = 0; j < col; j++){
			printf(" %c |", board[i][j]);
		}
		printf("\n---------------------------------------------\n");
		//printf("\n");
	}
	printf("\n");
}
char Judge(char board[][COL], int row, int col)
{
	//判断行
	for (int i = 0; i < row; i++){
		for (int j = 0; j <= col - 4; j++){
			char ret = board[i][j];
			if (ret != ' ' && ret == board[i][j + 1] && ret == board[i][j + 2] && \
				ret == board[i][j + 3] && ret == board[i][j + 4] ){
				return ret;
			}
		}
	}
	//判断列
	for (int j = 0; j <= col; j++){
	   for (int i = 0; i < row-4; i++){
			char ret = board[i][j];
			if (ret != ' ' && ret == board[i+1][j] && ret == board[i+2][j] && \
				ret == board[i+3][j] && ret == board[i+4][j]){
				return ret;
			}
		}
	}
	//判断正斜线
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			char ret = board[i][j];
			if ((ret == board[i + 1][j + 1]) && (ret != ' ') && (ret == board[i + 2][j + 2]) && \
				(ret == board[i + 3][j + 3]) && (ret == board[i + 4][j + 4]) ){
				return ret;
			}
		}
	}
	//判断反斜线
	for (int i = 0; i <row; i++){
		for (int j = col-1; j >=0; j--){
			char ret = board[i][j];
			if ((ret == board[i + 1][j - 1]) && (ret != ' ') && (ret == board[i + 2][j - 2]) && \
				(ret == board[i + 3][j - 3]) && (ret == board[i + 4][j - 4])){
				return ret;
			}
		}
	}
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (' ' == board[i][j]){
				return 'N';
			}
		}
	}
	return 'E';
}
void Player(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1){
		printf("Please input your pos<x,y>:");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col)){
			if (' ' == board[x - 1][y - 1]){
				board[x-1][y-1] = 'O';
				break;
			}
			else{
				printf("Your pos error!\n");
			}
		}
		else{
			printf("Input error,input again!\n");
		}
	}
}
void Game()
{
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));
	char result = 'N';
	srand((unsigned int)time(NULL));
	while (1){
		system("cls");
		Computer(board, ROW, COL);
		Show(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if ('N' != result){
			break;
		}
		Player(board, ROW, COL);
		Show(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if ('N' != result){
			break;
		}
	}
	switch (result){
	case 'X':
		printf("Computer Win!\n");
		break;
	case 'O':
		printf("YOU WIN!\n");
		break;
	case 'E':
		printf("平局!\n");
		break;
	default:
		break;
	}
}