#define _CRT_SECURE_NO_WARNINGS 1
#include "Three_Chess.h"
int main()
{
	int select = 0;
	int quit = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			printf("Quit the game!\n");
			break;
		default:
			printf("Enter error,please again!\n");
			break;
		}
	}
	system("pause");
	return 0;
}