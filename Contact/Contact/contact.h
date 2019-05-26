#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define NAME_SIZE 32  //名字长度
#define TEL_SIZE  15   //电话长度
#define ADD_SIZE 300   //地址长度
#define MAXNNUM 5   //最大人数人数
#define PERSONNUM 3//实际人数

enum select{
	EXIT,//  0  退出
	ADD,//  1  增加
	DELECT,// 2  删除
	SEARCH,// 3  查找
	MODIFY,//4   修改
	SHOW,//  5   显示
	SORT,//  6  排序
	CLEAR//   7   清空
};

typedef struct Person{
	char name[NAME_SIZE];
	char sex;
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADD_SIZE];
}Person;

typedef struct Contact{
	Person person[MAXNNUM];
	int count;
}Contact,*contact_p;

void menu();//菜单
void InitContact(contact_p pc);//初始化结构体
void AddPerson();//增加联系人
void DelectPerson();//删除联系人
void SearchPerson();//查找联系人
void ModifyPerson();//修改联系人
void ShowContact();//显示所有联系人
void SortContact();//排序联系人
void ClearContact();//清空联系人


#endif