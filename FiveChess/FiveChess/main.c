#define _CRT_SECURE_NO_WARNINGS 1
#include "FiveChess.h"
int main()
{
	int input = 0;
	int quit = 0;
	while (!quit){
		Menu();
		scanf("%d", &input);
		switch (input){
		case 1:
			Game();
			break;
		case 2:
			printf("Quit the game!\n");
			quit = 1;
			break;
		default:
			printf("Input error!\n");
			break;
		}
	}
	system("pause");
	return 0;
}