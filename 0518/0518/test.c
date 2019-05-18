#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{

	//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	//char**cp[] = { c + 3, c + 2, c + 1, c };
	//char***cpp = cp;
	//printf("%s\n", **++cpp);
	//printf("%s\n", *--*++cpp + 3);
	//printf("%s\n", *cpp[-2] + 3);
	//printf("%s\n", cpp[-1][-1] + 1);

	//char *a[] = { "work", "at", "alibaba" };
	//char**pa = a;
	//pa = pa + 2;
	////pa++;
	//printf("%s\n", *pa);//at

	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int *ptr1 = (int *)(&aa + 1);
	//int *ptr2 = (int *)(*(aa + 1));
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5

	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
		//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
		//int *p;
		//p = a[0];
		//printf("%d", p[0]);//1
	
		//int a[4] = { 1, 2, 3, 4 };
		//int *ptr1 = (int *)(&a + 1);
		//int *ptr2 = (int *)((int)a + 1);
		//printf("%x,%x", ptr1[-1], *ptr2);//4 02000000
		
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d ,%d ", *(a + 1), *(ptr - 1));//2  5
	system("pause");
	return 0;
}


#if 0
int cmp(const void *x,const void *y)
{
	return (*(int *)x - *(int *)y);
}
int intcmp(void *x, void *y)
{
	return (*(int *)x - *(int *)y);
}
void swap(void *x, void *y, int size)
{
	int i = 0;
	for (i = 0; i < size; i++){
		char tmp = *((char *)x + i);
		*((char *)x + i) = *((char *)y + i);
		*((char *)y + i) = tmp;
	}
	return;
}
void bubble(void *arr, int num, int size, int (*intcmp)(void *,void *))
{
	int i = 0, j = 0;
	int flag = 0;
	for (i = 0; i < num - 1; i++){
		for (j = 0; j < num - 1 - i; j++){
			if (cmp((char *)arr+j*size,(char *)arr+(j+1)*size)<0){
				swap((char *)arr + j*size, (char *)arr + (j + 1)*size,size);
			}
		}
	}
}

void Show(int *arr, int size)
{
	int i = 0;
	for (; i < size; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
	return;
}
int main()
{
	int a[10] = { 2, 5, 1, 9, 6, 0, 3, 5, 3, 8 };
	//qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), cmp);
	bubble(a, sizeof(a) / sizeof(a[0]), sizeof(int), intcmp);
	Show(a, sizeof(a) / sizeof(a[0]));
	system("pause");
	return 0;
}
#endif