#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

#define _CRT_SECURE_NO_WARNINGS 1
#define NAME_SIZE 64//姓名长度
#define TEL_SIZE 16//电话号码长度
#define ADDR_SIZE 128//地址长度
#define LIST_DEFAULT 1//列表中人的个数
#define INC_SIZE 1//扩容的长度

typedef struct person{
	char name[NAME_SIZE];
	char sex;
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}person_t,*person_p,**person_pp;

typedef struct contact{
	int cap;//通讯录容量
	int size;//实际人数
	person_t list[0];
}contact_t,*contact_p,**contact_pp;

void menu();
void InitContact(contact_pp ctpp);//初始化
void AddPerson(contact_pp ctpp);//增加联系人
void DelPerson(contact_pp ctpp);//删除联系人
void SearchPerson(contact_p ct);//查找联系人
void ModPerson(contact_pp ctpp);//修改联系人
void ClearPerson(contact_pp ctpp);//清空联系人
void SortContact(contact_p ct);//排序
void ShowContact(contact_p ct);//显示通讯录
void Save();//保存
void Load();//加载

#endif
