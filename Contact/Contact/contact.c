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
void InitContact(contact_p pc)//��ʼ���ṹ��
{
	pc->count = PERSONNUM;
	memset(pc->person, '0', sizeof(pc->person));
	return;
}
void AddPerson(contact_p pc)//������ϵ��
{
	if (pc->count == MAXNNUM){
		printf("ͨѶ¼����\n");
		return;
	}
	printf("���������֣�");
	scanf("%s", pc->person[pc->count].name);
	printf("�������Ա�");
	scanf("%s", pc->person[pc->count].sex);
	printf("���������䣺");
	scanf("%d", &(pc->person[pc->count].age));
	printf("������绰��");
	scanf("%s", pc->person[pc->count].telphone);
	printf("������סַ��");
	scanf("%s", pc->person[pc->count].address);
	(pc->count)++;
}
void DelectPerson();//ɾ����ϵ��
void SearchPerson();//������ϵ��
void ModifyPerson();//�޸���ϵ��
void ShowContact();//��ʾ������ϵ��
void SortContact();//������ϵ��
void ClearContact();//�����ϵ��