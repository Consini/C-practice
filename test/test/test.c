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
#define M5 "\n\n员工号 姓名 性 别 出生年月   基本工资 补贴总额 代扣总额 实际工资\n\n"

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
	printf("\t\t*\t I:输入员工工资信息                 *\n");
	printf("\t\t*\t O:输出员工工资信息                 *\n");
	printf("\t\t*\t T:输出员工工资统计信息             *\n");
	printf("\t\t*\t S:按要求排序后输出员工工资信息     *\n");
	printf("\t\t*\t F:按员工号查找并输出其工资信息     *\n");
	printf("\t\t*\t D:按员工号查找并删除其工资信息     *\n");
	printf("\t\t*\t Q:退出系统                         *\n");
	printf("\t\t*********************************************\n\n");
	printf("\t\t\t请选择I.O.T.S.F.D.Q:");

}

void menu1()
{
	system("cls");
	printf("1、员工号是员工信息的唯一标识，不允许重复。长度<=4\n员工号格式：第1位为1--9之间的数字，后面的字符可以是任意数字\n");
	printf("2、姓名必须是2个以上的汉字，最多4个汉字。\n");
	printf("3、性别只能是男或女。\n");
	printf("4、出生日期格式：4位年-月-日(长度<=10)。\n");
	printf("5、0<=岗位工资、补贴总额、代扣总额<=99999。\n");
	printf("6、输入空格+Ctrl+z结束!\n");
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
		printf("是否退出？<Y/N>:");
		scanf("%c", &c);
		if (c == 'Y')
			exit(0);
		else
			main();
	}

	char q;
	printf("\nA:录入文件 B:人工输入  请选择:");
	scanf("\n%c", &q);
	if (q == 'A')
	{
		while (!feof(fp))
		{
			if (fread(&em[i], sizeof(A), 1, fp) == 1)
				i++;
		}
		fclose(fp);
		printf("录入完成，按任意键返回菜单。");
	}

	else
	{
		printf("\n\n员工号 姓名 性 别 出生年月   基本工资 补贴总额 代扣总额\n");
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
	printf("现有人工总数%d\n", i);
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
		printf("按任意键返回主界面。\n");
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
		if (strcmp(em[j].xb, "男") == 0)
		{
			nansum += em[j].yfgz;
			nannum++;
		}
		if (strcmp(em[j].xb, "女") == 0)
		{
			nvsum += em[j].yfgz;
			nvnum++;
		}
		sum += em[j].yfgz;
	}
	printf("************************************\n");
	printf("\f男性工人人数:%d\n", nannum);
	printf("\f女性工人人数:%d\n", nvnum);

	printf("\f所发工资总额:%.2lf\n", sum);
	printf("\f所发工资平均值:%.2lf\n", sum / i);

	printf("\f所发最高工资:%.2lf\n", max);
	printf("\f所发最低工资:%.2lf\n", min);


	if (nannum != 0)
		printf("\f男性工资平均值:%.2lf\n", nansum / (nannum));
	else
		printf("\f无男性员工!\n");
	if (nvnum != 0)
		printf("\f女性工资平均值:%.2lf\n", nvsum / (nvnum));
	else
		printf("\f无女性员工!\n");
	printf("************************************\n");

}
void gzpxS()
{
	struct Employee temp;
	printf("按员工号升序排序!\n");
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

			printf("请继续查找！（如果不继续查找请按'N'！）");
			scanf("%c", &ch);
			if (ch != '\n')
				return;
		}
		if (sign == 0)
			printf("请输入要查找的员工的员工号!\n");
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
			printf("不存在该员工\n\n");
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
		printf("无员工（按任意键返回）!\n");
		return;
	}
tt:	printf("请输入要删除的员工的员工号!\n");
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
		printf("不存在该员工\n");
		goto tt;
	}
	if ((flag == 1) && (i == 0))
	{
		i = 0;
		printf("现有员工数为0\n");
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
	printf("编号为%d的员工已经删除!\n", s);
	printf("是否继续删除！（如果不继续删除请按'N'！）\n");




}

void tcxtQ()
{

	printf("确定要退出？<Y/N>:");
	char ch;
	scanf("\n%c", &ch);
	system("cls");
	if (ch == 'Y' || ch == 'y')
	{
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?.\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?..\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?...\n");
		Sleep(500);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?.\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?..\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t正在退出?...\n");
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