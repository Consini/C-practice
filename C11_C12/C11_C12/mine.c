#define _CRT_SECURE_NO_WARNINGS 1

//#if 0
#include"mine.h"
void Menu()//��ӡ�˵�
{
	printf("----------------------\n");
	printf("----    1.play    ----\n");
	printf("----    2.exit    ----\n");
	printf("----------------------\n");
	printf("Please your select:>>");
}
static int GetIndex(int start, int end)//�������׵�����
{
	return rand() % (end - start + 1) + start;
}
void SetMine(char mine[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int mine_num = MINE;
	while (mine_num){
		int i_index = GetIndex(1, row-2);
		int j_index = GetIndex(1, col-2);
		if ('0' == mine[i_index][j_index]){
			mine[i_index][j_index] = '1';
			mine_num--;
		}
	}
}
int GetMineNum(char mine[][COL], int x, int y)//�õ�<x,y>�Աߵ��׵ĸ���
{
	int minecount = 0;
	if (mine[x - 1][y] == '1')
		minecount++;
	if (mine[x - 1][y + 1] == '1')
		minecount++;
	if (mine[x - 1][y + 1] == '1')
		minecount++;
	if (mine[x][y + 1] == '1')
		minecount++;
	if (mine[x + 1][y + 1] == '1')
		minecount++;
	if (mine[x + 1][y] == '1')
		minecount++;
	if (mine[x + 1][y - 1] == '1')
		minecount++;
	if (mine[x][y - 1] == '1')
		minecount++;
	if (mine[x - 1][y - 1] == '1')
		minecount++;
	return minecount;
}
void Print(char show[ROW][COL], int row, int col)
{
	printf("   ");
	for (int i = 0; i < row-2; i++){
		printf("| %d ", i + 1);
	}
	printf("\n  -------------------------------------------\n");
	for (int i = 1; i <= row-2; i++){
		printf("%2d |", i);
		for (int j = 1; j <= col-2; j++){
			printf(" %c  ", show[i][j]);
		}
		printf("\n");
	}
}
void Expand(char mine[ROW][COL], char show[ROW][COL], int x, int y)//������չ
{
	if ((x >= 1) && (y >= 1) && (x <= (ROW-2)) && (y <= (COL-2))){
		if (GetMineNum(mine, x, y) == 0){
			show[x][y] = ' ';
			if (show[x - 1][y - 1] == '*'){
				Expand(mine, show, x - 1, y - 1);
			}
			if (show[x - 1][y] == '*'){
				Expand(mine, show, x - 1, y);
			}
			if (show[x - 1][y + 1] == '*'){
				Expand(mine, show, x - 1, y + 1);
			}
			if (show[x][y + 1] == '*'){
				Expand(mine, show, x, y + 1);
			}
			if (show[x + 1][y + 1] == '*'){
				Expand(mine, show, x + 1, y + 1);
			}
			if (show[x + 1][y] == '*'){
				Expand(mine, show, x + 1, y);
			}
			if (show[x + 1][y - 1] == '*'){
				Expand(mine, show, x + 1, y - 1);
			}
			if (show[x][y - 1] == '*') {
				Expand(mine, show, x, y - 1);
			}
		}
		else
		{
			show[x][y] = GetMineNum(mine, x, y)+'0';
		}
	}
}
void Play(char show[][COL], char mine[][COL], int row, int col)
{
	int x = 0, y = 0;
	int num = 0;
	int count = 0;
	Print(mine, ROW, COL);
	while (count<((ROW - 2)*(COL - 2) - MINE)){
		system("cls");
		Print(show, ROW , COL);//��ӡ��Ϸ����
		printf("Please enter your pos<x,y>:");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row-2) && (y >= 1 && y <= col-2)){
			if ('1' == mine[x][y]){//��һ�²ȵ���
				if (count == 0){//�տ�ʼcount = 0
					Rmove(mine, x, y);//������
					num = GetMineNum(mine, x, y);
					if (num == 0){
						show[x][y] = ' ';
						count++;
						Expand(show, mine, x, y);
						Print(show, ROW, COL);
					}
					else{
						show[x][y] = num + '0';
						Print(show, ROW , COL );
					}
				}
				else{
					printf("YOU LOSE!\n");
					Print(mine, ROW , COL );
					break;
				}
			}
			else if ('1' != mine[x][y])
			{//��һ��û�вȵ���
				num = GetMineNum(mine, x, y);
				if (num == 0){
					show[x][y] = ' ';
				}
				else{
					show[x][y] = num + '0';
				}
				count++;
				Expand(mine, show, x, y);
				Print(show, ROW, COL);
			}
		}
		else{
			printf("Enter error.Please enter again!\n");
			continue;
		}
		if (count == ((ROW - 2)*(COL - 2) - MINE)){
			printf("YOU WIN!\n");
			break;
		}
	}
}
void Rmove(char mine[ROW][COL], int x, int y)
{
	mine[x][y] = '0';
	GetMineNum(mine, x, y);
	while (1){
		int x1 = rand() % (ROW-2)+1;
		int y1 = rand() % (COL-2)+1;
		if (mine[x1][y1] != '1' && ((x1 != x) && (y1 != y))){
			mine[x1][y1] = '1';
			break;
		}
	}
}
void Game()//��Ϸ
{
	char show[ROW][COL];//�û������������Ľ���
	char mine[ROW][COL];//����׵�����
	memset(show, '*', sizeof(show));//��ʼ��Ϊ*
	memset(mine, '0', sizeof(mine));//��ʼ��Ϊ0
	SetMine(mine, ROW, COL);//����
	Play(show, mine, ROW, COL);//��ʼ��Ϸ
}
//#endif