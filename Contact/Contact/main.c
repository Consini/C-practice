#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

int main()
{
	int select = 0;
	int quit = 0;
	Contact con;
	InitContact(&con);
	while (!quit){
		menu();
		scanf("%d", &select);
		switch (select){
		case EXIT:
			printf("Exit!\n");
			quit = 1;
			break;
		case ADD:
			AddPerson(&con);
			break;
		case DELECT:

			break;
		case SEARCH:

			break;
		case MODIFY:

			break;
		case SHOW:

			break;
		case SORT:

			break;
		case CLEAR:

			break;
		default:
			printf("Your enter error.Try again:\n");
			break;

		}
	}
	system("pause");
	return 0;
}
