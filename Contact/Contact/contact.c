#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("-------------------------\n");
	printf("---1.ADD      2.DELECT---\n");
	printf("---3.SEARCH   4.MODIFY---\n");
	printf("---5.SHOW     6.SORT  ---\n");
	printf("---7.CLEAR    8.EXIT  ---\n"); 
	printf("-------------------------\n");
	printf("Please inter your select:> ");
}
void InitContact(contact_p pc)//初始化结构体
{
	pc->count = PERSONNUM;
	memset(pc->person, '0', sizeof(pc->person));
	return;
}
void AddPerson(contact_p pc)//增加联系人
{
	if (pc->count == MAXNNUM){
		printf("通讯录已满\n");
		return;
	}
	printf("请输入名字：");
	scanf("%s", pc->person[pc->count].name);
	printf("请输入性别：");
	scanf("%s", pc->person[pc->count].sex);
	printf("请输入年龄：");
	scanf("%d", &(pc->person[pc->count].age));
	printf("请输入电话：");
	scanf("%s", pc->person[pc->count].telphone);
	printf("请输入住址：");
	scanf("%s", pc->person[pc->count].address);
	(pc->count)++;
}
void DelectPerson();//删除联系人
void SearchPerson();//查找联系人
void ModifyPerson();//修改联系人
void ShowContact();//显示所有联系人
void SortContact();//排序联系人
void ClearContact();//清空联系人