#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

#define _CRT_SECURE_NO_WARNINGS 1
#define NAME_SIZE 64//��������
#define TEL_SIZE 16//�绰���볤��
#define ADDR_SIZE 128//��ַ����
#define LIST_DEFAULT 1//�б����˵ĸ���
#define INC_SIZE 1//���ݵĳ���

typedef struct person{
	char name[NAME_SIZE];
	char sex;
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}person_t,*person_p,**person_pp;

typedef struct contact{
	int cap;//ͨѶ¼����
	int size;//ʵ������
	person_t list[0];
}contact_t,*contact_p,**contact_pp;

void menu();
void InitContact(contact_pp ctpp);//��ʼ��
void AddPerson(contact_pp ctpp);//������ϵ��
void DelPerson(contact_pp ctpp);//ɾ����ϵ��
void SearchPerson(contact_p ct);//������ϵ��
void ModPerson(contact_pp ctpp);//�޸���ϵ��
void ClearPerson(contact_pp ctpp);//�����ϵ��
void SortContact(contact_p ct);//����
void ShowContact(contact_p ct);//��ʾͨѶ¼
void Save();//����
void Load();//����

#endif
