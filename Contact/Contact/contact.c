#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//检查通讯录是否已满  yes->1   no->0
static int IsFull(contact_p ct){
	return ct->size == ct->cap ? 1 : 0;
}
//扩容通讯录 yes->1  no->0
static int IncContact(contact_pp ctpp)
{
	int new_size = sizeof(contact_t)+(((*ctpp)->cap) + INC_SIZE)*sizeof(person_t);
	contact_p p = realloc(*ctpp, new_size);
	if (!p){
		printf("Inc Contact Error!\n");
		return 0;
	}
	p->cap = (*ctpp)->cap + INC_SIZE;
	*ctpp = p;
	printf("debug：Inc Contact Success!\n");
	return 1;
}
//比较人名
static int person_cmp(const void *x, const void *y)
{
	person_p _x = (person_p)x;
	person_p _y = (person_p)y;
	return strcmp(_x->name, _y->name);
}
//以人名查找通讯录
static int FindName(contact_p ct, char *name)
{
	int i = 0;
	assert(ct);
	for (i = 0; i < ct->size; i++)
	{
		if (strcmp(ct->list[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//没找到
}
//交换结构体内容
static void Swap(struct person *a, struct person *b)
{
	struct person tmp;
	tmp= *a;
	*a = *b;
	*b = tmp;
	return;
}
void menu()
{
	printf("---------------------------------------\n");
	printf("--  1.Show      2.Add       3.Del    --\n");
	printf("--  4.Mod       5.Search    6.Sort   --\n");
	printf("--  7.Clear     8.Save      9.Exit   --\n");
	printf("---------------------------------------\n");
	printf("Please Enter Your Select:>");
}
void InitContact(contact_pp ctpp)
{
	*ctpp = malloc(sizeof(contact_t)+sizeof(person_t)*LIST_DEFAULT);
	if (NULL == *ctpp){
		printf("%s: %d\n)", strerror(errno), errno);
		exit(1);//终止程序
	}
	(*ctpp)->cap = LIST_DEFAULT;
	(*ctpp)->size = 0;
	printf("debug: Init Contact Success!\n");

}
void AddPerson(contact_pp ctpp)
{
	if (!IsFull(*ctpp) || IncContact(ctpp)){
		person_p p = &((*ctpp)->list[(*ctpp)->size]);
		printf("Please Enter Name: ");
		scanf("%s", p->name);
		printf("Please Enter Sex: ");
		scanf(" %c", &(p->sex));
		printf("Please Enter Age: ");
		scanf(" %u", &(p->age));
		printf("Please Enter Telphone: ");
		scanf(" %s", p->telphone);
		printf("Please Enter Address: ");
		scanf(" %s", p->address);
		(*ctpp)->size++;
	}
	else{
		printf("Realloc Error!\n");
		return;
	}
}
void ShowContact(contact_p ct)
{
	int top = ct->size;
	int i = 0;
	person_p p = ct->list;
	for (; i < top; i++){
		printf("姓名: %-6s性别: %-3c年龄: %-3d电话: %-12s住址: %-16s\n",\
			p[i].name, p[i].sex,p[i].age, p[i].telphone,p[i].address);
	}
}
void SortContact(contact_p ct)
{
	person_p p = ct->list;
	qsort(p, ct->size, sizeof(person_t), person_cmp);
}
void SearchPerson(contact_p ct)
{
	assert(ct);
	char name[NAME_SIZE] = { 0 };
	int ret = 0;
	printf("Please Enter The Name Of The User You Are Looking For: ");
	scanf(" %s", name);
	ret = FindName(ct, name);
	if (-1 != ret){
		printf("姓名: %-6s性别: %-3c年龄: %-3d电话: %-12s住址: %-16s\n", \
			ct->list[ret].name, ct->list[ret].sex, ct->list[ret].age, \
			ct->list[ret].telphone, ct->list[ret].address);
	}
	else{
		printf("Sorry,Don not hava this user!\n");
	}
}
void ModPerson(contact_pp ctpp)
{
	assert(*ctpp);
	char name[NAME_SIZE] = { 0 };
	int ret = 0;
	printf("Please Enter The Name Of The User You Want To Modify: ");
	scanf(" %s", name);
	ret = FindName(*ctpp, name);
	if (-1 != ret){
		person_p p = &((*ctpp)->list[ret]);
		printf("Please Enter Name: ");
		scanf("%s", p->name);
		printf("Please Enter Sex: ");
		scanf(" %c", &(p->sex));
		printf("Please Enter Age: ");
		scanf(" %u", &(p->age));
		printf("Please Enter Telphone: ");
		scanf(" %s", p->telphone);
		printf("Please Enter Address: ");
		scanf(" %s", p->address);
		printf("Modify Success!\n");
	}
	else{
		printf("No Such User!\n");
	}
}
void DelPerson(contact_pp ctpp)
{
	assert(*ctpp);
	char name[NAME_SIZE] = { 0 };
	int ret = 0;
	int i = 0;
	printf("Please Enter The Name Of The User You Want To Deleted: ");
	scanf(" %s", name);
	ret = FindName(*ctpp, name);
	if (-1 != ret){
		Swap(&(*ctpp)->list[ret], &(*ctpp)->list[(*ctpp)->size-1]);
		(*ctpp)->size--;
		//for (i = ret; i < (*ctpp)->size; i++){
		//	(*ctpp)->list[i] = (*ctpp)->list[i+1];
		//}
		//(*ctpp)->size--;
		printf("Deleted Success!\n");
	}
	else{
		printf("No Such User!\n");
	}
}
//此处清空通讯录后并没有恢复通讯录原来的长度
void ClearPerson(contact_pp ctpp)
{
	(*ctpp)->size = 0;
	printf("Clear Success!\n");
	return;
}