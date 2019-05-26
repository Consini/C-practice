#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct B{
	char a;
	char b; 
	double c;
};
struct A{
	double a;//0-->8
	char b[3];//8-->11
	char *c;//12-->16
	struct B d[3];//16-->16*3+16=64
	double e;//64-->72
	long long *f[3];//72-->72+3*4=84
	char g;//84-->85-->88
};
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
union un{
	char a;
	int c;
};
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//返回局部变量或临时变量的地址	
//}
 
	
int main()
{


	//char *str = NULL;
	//str = GetMemory();
	//printf(str);

	//char *str = NULL;
	//GetMemory(&str);
	//if (str == NULL){
	//	printf("error!\n");
	//}
	//strcpy(str, "Hello world!");
	//printf(str);
	//free(str);
	//printf(str);
	

	//下面输出的结果是什么？
	//printf("%d\n", sizeof(union Un1));
	//printf("%d\n", sizeof(union Un2));
	//union un obj;
	//obj.c = 0;
	//obj.c = 1;
	//printf("%d\n", obj.a);
//	printf("%d\n", sizeof(struct S));
	//void *p = 0x1243;
	//(int)p - (int)();
	system("pause");
	return 0;
}