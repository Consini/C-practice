#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define NAME_SIZE 32  //���ֳ���
#define TEL_SIZE  15   //�绰����
#define ADD_SIZE 300   //��ַ����
#define MAXNNUM 5   //�����������
#define PERSONNUM 3//ʵ������

enum select{
	EXIT,//  0  �˳�
	ADD,//  1  ����
	DELECT,// 2  ɾ��
	SEARCH,// 3  ����
	MODIFY,//4   �޸�
	SHOW,//  5   ��ʾ
	SORT,//  6  ����
	CLEAR//   7   ���
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

void menu();//�˵�
void InitContact(contact_p pc);//��ʼ���ṹ��
void AddPerson();//������ϵ��
void DelectPerson();//ɾ����ϵ��
void SearchPerson();//������ϵ��
void ModifyPerson();//�޸���ϵ��
void ShowContact();//��ʾ������ϵ��
void SortContact();//������ϵ��
void ClearContact();//�����ϵ��


#endif