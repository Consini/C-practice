#define _CRT_SECURE_NO_WARNINGS 1
<span style = "font-size:14px;">#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>

#define M1 "%-6d %-4s %3s  %-2d.%.02d.%.02d   "
#define M2 em[j].num,em[j].name,em[j].xb,em[j].y,em[j].m,em[j].d
#define M3 "%.2lf  %.2lf  %.2lf  %.2lf\n"
#define M4 em[j].gwgz,em[j].btze,em[j].dkze,em[j].yfgz
#define M5 "\n\nԱ���� ���� �� �� ��������   �������� �����ܶ� �����ܶ� ʵ�ʹ���\n\n"

void menu();
void menu1();
void srxxI();
void scxxO();
void gztjT();
void gzpxS();
void czxxF();
void czscD();
void tcxtQ();

int i = 0;
struct Employee
{
	int num;
	char name[10];
	char xb[3];
	int y;
	int m;
	int d;
	double gwgz;
	double btze;
	double dkze;
	double yfgz;
}A;

struct Employee em[100];
int main()
{
	char n;
	int i = 0;
	while (1)
	{
		menu();
		scanf("%c", &n);
		switch (n)
		{
		case 'I':
			srxxI();
			break;
		case 'O':
			scxxO();
			break;
		case 'T':
			gztjT();
			break;
		case 'S':
			gzpxS();
			break;
		case 'F':
			czxxF();
			break;
		case 'D':
			czscD();
			break;
		case 'Q':
			tcxtQ();
			break;
		default:break;
		}
		getch();
	}
}

void menu()
{
	system("cls");

	printf("\t\t*********************************************\n");
	printf("\t\t*\t I:����Ա��������Ϣ                 *\n");
	printf("\t\t*\t O:���Ա��������Ϣ                 *\n");
	printf("\t\t*\t T:���Ա������ͳ����Ϣ             *\n");
	printf("\t\t*\t S:��Ҫ����������Ա��������Ϣ     *\n");
	printf("\t\t*\t F:��Ա���Ų��Ҳ�����乤����Ϣ     *\n");
	printf("\t\t*\t D:��Ա���Ų��Ҳ�ɾ���乤����Ϣ     *\n");
	printf("\t\t*\t Q:�˳�ϵͳ                         *\n");
	printf("\t\t*********************************************\n\n");
	printf("\t\t\t��ѡ��I.O.T.S.F.D.Q:");

}

void menu1()
{
	system("cls");
	printf("1��Ա������Ա����Ϣ��Ψһ��ʶ���������ظ�������<=4\nԱ���Ÿ�ʽ����1λΪ1--9֮������֣�������ַ���������������\n");
	printf("2������������2�����ϵĺ��֣����4�����֡�\n");
	printf("3���Ա�ֻ�����л�Ů��\n");
	printf("4���������ڸ�ʽ��4λ��-��-��(����<=10)��\n");
	printf("5��0<=��λ���ʡ������ܶ�����ܶ�<=99999��\n");
	printf("6������ո�+Ctrl+z����!\n");
}

void srxxI()
{
	system("cls");
	menu1();

	FILE *fp;
	fp = fopen("e:\\bbb.txt", "ab+");

	if (fp == NULL)
	{
		char c;
		printf("can't open this film!\n");
		printf("�Ƿ��˳���<Y/N>:");
		scanf("%c", &c);
		if (c == 'Y')
			exit(0);
		else
			main();
	}

	char q;
	printf("\nA:¼���ļ� B:�˹�����  ��ѡ��:");
	scanf("\n%c", &q);
	if (q == 'A')
	{
		while (!feof(fp))
		{
			if (fread(&em[i], sizeof(A), 1, fp) == 1)
				i++;
		}
		fclose(fp);
		printf("¼����ɣ�����������ز˵���");
	}

	else
	{
		printf("\n\nԱ���� ���� �� �� ��������   �������� �����ܶ� �����ܶ�\n");
		while (1)
		{
			char ch;
			scanf("%d", &em[i].num);
			scanf("%s", em[i].name);
			scanf("%s", em[i].xb);
			scanf("%d-%d-%d", &em[i].y, &em[i].m, &em[i].d);
			scanf("%lf", &em[i].gwgz);
			scanf("%lf", &em[i].btze);
			scanf("%lf", &em[i].dkze);
			em[i].yfgz = em[i].gwgz + em[i].btze - em[i].dkze;
			i++;
			while ((ch = getchar()) != '\n')
				main();
		}
	}
}
void scxxO()
{
	int j;
	printf("�����˹�����%d\n", i);
	if (i != 0)
	{
		printf(M5);
		for (j = 0; j<i; j++)
		{
			printf(M1, M2);
			printf(M3, M4);
		}
	}
	else
		printf("����������������档\n");
}
void gztjT()
{

	double sum = 0.0;
	double nansum = 0.0, nvsum = 0.0;
	int j;
	int nannum = 0;
	int nvnum = 0;
	double max = 0.0;
	double min = 100000.0;
	for (j = 0; j<i; j++)
	{
		if (max<em[j].yfgz)
			max = em[j].yfgz;
		if (min>em[j].yfgz)
			min = em[j].yfgz;
		if (strcmp(em[j].xb, "��") == 0)
		{
			nansum += em[j].yfgz;
			nannum++;
		}
		if (strcmp(em[j].xb, "Ů") == 0)
		{
			nvsum += em[j].yfgz;
			nvnum++;
		}
		sum += em[j].yfgz;
	}
	printf("************************************\n");
	printf("\f���Թ�������:%d\n", nannum);
	printf("\fŮ�Թ�������:%d\n", nvnum);

	printf("\f���������ܶ�:%.2lf\n", sum);
	printf("\f��������ƽ��ֵ:%.2lf\n", sum / i);

	printf("\f������߹���:%.2lf\n", max);
	printf("\f������͹���:%.2lf\n", min);


	if (nannum != 0)
		printf("\f���Թ���ƽ��ֵ:%.2lf\n", nansum / (nannum));
	else
		printf("\f������Ա��!\n");
	if (nvnum != 0)
		printf("\fŮ�Թ���ƽ��ֵ:%.2lf\n", nvsum / (nvnum));
	else
		printf("\f��Ů��Ա��!\n");
	printf("************************************\n");

}
void gzpxS()
{
	struct Employee temp;
	printf("��Ա������������!\n");
	for (int s = 0; s<i; s++)
	{
		for (int j = s; j<i; j++)
		{
			if (em[j].num<em[s].num)
			{
				temp.num = em[j].num;
				strcpy(temp.name, em[j].name);
				strcpy(temp.xb, em[j].xb);
				temp.y = em[j].y;
				temp.m = em[j].m;
				temp.d = em[j].d;
				temp.gwgz = em[j].gwgz;
				temp.btze = em[j].btze;
				temp.dkze = em[j].dkze;
				temp.yfgz = em[j].yfgz;

				em[j].num = em[s].num;
				strcpy(em[j].name, em[s].name);
				strcpy(em[j].xb, em[s].xb);
				em[j].y = em[s].y;
				em[j].m = em[s].m;
				em[j].d = em[s].d;
				em[j].gwgz = em[s].gwgz;
				em[j].btze = em[s].btze;
				em[j].dkze = em[s].dkze;
				em[j].yfgz = em[s].yfgz;


				em[s].num = temp.num;
				strcpy(em[s].name, temp.name);
				strcpy(em[s].xb, temp.xb);
				em[s].y = temp.y;
				em[s].m = temp.m;
				em[s].d = temp.d;
				em[s].gwgz = temp.gwgz;
				em[s].btze = temp.btze;
				em[s].dkze = temp.dkze;
				em[s].yfgz = temp.yfgz;

			}
		}
	}
	printf(M5);
	for (int j = 0; j<i; j++)
	{
		printf(M1, M2);
		printf(M3, M4);
	}
}

void czxxF()
{
	int s;
	int flag = 0;
	int sign = 0;
	char ch;
	while (1)
	{
		if (sign == 1)
		{

			printf("��������ң�����������������밴'N'����");
			scanf("%c", &ch);
			if (ch != '\n')
				return;
		}
		if (sign == 0)
			printf("������Ҫ���ҵ�Ա����Ա����!\n");
		scanf("%d", &s);
		for (int j = 0; j<i; j++)
		{
			if (em[j].num == s)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("�����ڸ�Ա��\n\n");
		else
		{
			printf(M5);
			printf(M1, M2);
			printf(M3, M4);
		}
		sign = 1;
	}
}

void czscD()
{
	int s;
	int flag = 0;
	int label;
	if (i == 0)
	{
		printf("��Ա��������������أ�!\n");
		return;
	}
tt:	printf("������Ҫɾ����Ա����Ա����!\n");
	scanf("%d", &s);
	for (int j = 0; j<i; j++)
	{
		if (em[j].num == s)
		{
			label = j;
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("�����ڸ�Ա��\n");
		goto tt;
	}
	if ((flag == 1) && (i == 0))
	{
		i = 0;
		printf("����Ա����Ϊ0\n");
		return;
	}
	for (j = label + 1; j <= i; j++)
	{
		em[j - 1].num = em[j].num;
		strcpy(em[j - 1].name, em[j].name);
		strcpy(em[j - 1].xb, em[j].xb);
		em[j - 1].y = em[j].y;
		em[j - 1].m = em[j].m;
		em[j - 1].d = em[j].d;
		em[j - 1].gwgz = em[j].gwgz;
		em[j - 1].btze = em[j].btze;
		em[j - 1].dkze = em[j].dkze;
		em[j - 1].yfgz = em[j].yfgz;
	}
	i--;
	printf("���Ϊ%d��Ա���Ѿ�ɾ��!\n", s);
	printf("�Ƿ����ɾ���������������ɾ���밴'N'����\n");




}

void tcxtQ()
{

	printf("ȷ��Ҫ�˳���<Y/N>:");
	char ch;
	scanf("\n%c", &ch);
	system("cls");
	if (ch == 'Y' || ch == 'y')
	{
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?.\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?..\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?...\n");
		Sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?.\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?..\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t�����˳�?...\n");
		Sleep(1000);


		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t The End!");
		printf("\n\n\t\t\tWelcome to back again next time^_^\n");
		system("pause");
		exit(1);
	}
	else
		main();
}< / span>