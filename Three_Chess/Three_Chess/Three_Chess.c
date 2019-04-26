#define _CRT_SECURE_NO_WARNINGS 1
#include "Three_Chess.h"
void Menu()//��ӡ�˵�
{
	printf("----------------------\n");
	printf("-----   1.play   -----\n");
	printf("-----   2.exit   -----\n");
	printf("----------------------\n");
	printf("Please enter your select:");
}
void ComputerMove(char board[][COL], int row, int col)//��������,����ΪO
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
void PlayerMove(char board[][COL], int row, int col)//������壬����ΪX
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
char Judge(char board[][COL], int row, int col)//�жϽ��
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
void ShowBoard(char board[][COL], int row, int col)//��ӡ����
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
void Game()//��Ϸ
{
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));//һ���ֽ�һ���ֽڵİ�������������Ϊһ��ָ����ֵ
	char result = 'N';
	srand((unsigned long)time(NULL));//���������
	while (1)
	{
		system("cls");//����
		ComputerMove(board, ROW, COL);//��������
		ShowBoard(board, ROW, COL);//��ʾ����
		result = Judge(board, ROW, COL);//�жϽ��
		if (result != 'N'){//N�������̻�û�����꣬��!N�����ѷֳ�ʤ����ƽ��
			break;
		}
		PlayerMove(board, ROW, COL);//�������
		ShowBoard(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != 'N'){
			break;
		}
	}
	switch (result){
	case 'X'://XΪ������ӣ����Ӯ
		printf("Congratulations! You Win!\n");
		break;
	case 'O'://OΪ�������ӣ�����Ӯ
		printf("You lose,Computer Win!\n");
		break;
	case 'E'://E����ƽ��
		printf("Draw\n");
		break;
	default:
		break;
	}
}