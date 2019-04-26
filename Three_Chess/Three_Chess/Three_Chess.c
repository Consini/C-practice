#define _CRT_SECURE_NO_WARNINGS 1
#include "Three_Chess.h"
void Menu()//打印菜单
{
	printf("----------------------\n");
	printf("-----   1.play   -----\n");
	printf("-----   2.exit   -----\n");
	printf("----------------------\n");
	printf("Please enter your select:");
}
void ComputerMove(char board[][COL], int row, int col)//电脑下棋,棋子为O
{
	while (1){
		int x = rand() % row;
		int y = rand() % col;
		if (' ' == board[x][y]){
			board[x][y] = 'O';
			break;
		}
	}
}
void PlayerMove(char board[][COL], int row, int col)//玩家下棋，棋子为X
{
	int x , y ;
	while (1){
		printf("Please enter your pos(x,y): ");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col)){
			if (' ' == board[x-1][y-1]){
				board[x - 1][y - 1] = 'X';
				break;
			}
			else{
				printf("Your pos is error!\n");
			}
		}
		else{
			printf("Enter error!Try again\n");
		}
	}
}
char Judge(char board[][COL], int row, int col)//判断结果
{
	for (int i = 0; i < row; i++){
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][0] != ' ')){
			return board[i][0];
		}
	}
	for (int j = 0; j < col; j++){
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]) && (board[0][j] != ' ')){
			return board[0][j];
		}
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && board[1][1] != ' '){
		return board[1][1];
	}
	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && board[1][1] != ' '){
		return board[1][1];
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
void ShowBoard(char board[][COL], int row, int col)//打印棋盘
{
	printf("  | 1 | 2 | 3\n");
	printf("----------------\n");
	for (int i = 0; i < row; i++){
		printf("%d |", i + 1);
		for (int j = 0; j < col; j++){
			printf(" %c  ", board[i][j]);
		}
		printf("\n");
	}
	
}
void Game()//游戏
{
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));//一个字节一个字节的把整个数组设置为一个指定的值
	char result = 'N';
	srand((unsigned long)time(NULL));//产生随机数
	while (1)
	{
		system("cls");//清屏
		ComputerMove(board, ROW, COL);//电脑先走
		ShowBoard(board, ROW, COL);//显示棋盘
		result = Judge(board, ROW, COL);//判断结果
		if (result != 'N'){//N代表棋盘还没有下完，则!N代表已分出胜负或平局
			break;
		}
		PlayerMove(board, ROW, COL);//玩家下棋
		ShowBoard(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != 'N'){
			break;
		}
	}
	switch (result){
	case 'X'://X为玩家棋子，玩家赢
		printf("Congratulations! You Win!\n");
		break;
	case 'O'://O为电脑棋子，电脑赢
		printf("You lose,Computer Win!\n");
		break;
	case 'E'://E代表平局
		printf("Draw\n");
		break;
	default:
		break;
	}
}