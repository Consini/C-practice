#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//1.��ɲ�������Ϸ�� 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("*******    1.play  *******\n");
	printf("*******    0.exit  *******\n");
	printf("**************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��: ");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
		{
			printf("�˳���Ϸ\n");
			//break;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}

#endif


#if 0
//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int binary(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//int right = strlen(arr) ;
	int sub = binary(arr, 7, left, right);
	if (-1 == sub)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", sub);
	}
	system("pause");
	return 0;
}
#endif





#if 0
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", passward);
		if (strcmp(passward, "123456") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			printf("����������������룺\n");
		}
	}
	if (3 == i)
	{
		printf("�˳�����\n");
	}
	system("pause");
	return 0;
}
#endif


#if 0
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("�������ַ���");
	while ((num = getchar()) != EOF)
	{
		
		//scanf("%d", &num);
		if (num >= 'a'&&num <= 'z')
		{
			printf("%c\n", num -32);
		}

		else if (num >= 'A'&&num <= 'Z')
		{
			printf("%c\n", num + 32);
		}

	}
	system("pause");
	return 0;
}
#endif