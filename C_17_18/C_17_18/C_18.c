#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
void Print_int(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
void Print_char(char arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
	return;
}
//void int_cmp(const void *a, const void *b)
//{
//	int *pa = (int *)a;
//	int *pb = (int *)b;
//	if (*pa > *pb){
//		return 1;
//	}
//	else if (*pa < *pb){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//void char_cmp(const void *a, const void *b)
//{
//	return (*(char *)a - *(char *)b);
//}
void cmp(const void *a, const void *b)
{
	return (*(char *)a - *(char *)b);
}
void Swap(char *p1, char *p2, int size)
{
	for (int i = 0; i < size; i++){
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
	return;
}
void bubble(void *arr, int count, int size, int cmp(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count-1; i++){
		for (j = 0; j < count - 1 - i; j++){
			if (cmp((char *)arr + j*size, (char *)arr + (j + 1)*size)<0)
			{
				Swap((char *)arr + j*size, (char *)arr + (j + 1)*size, size);
			}
		}
	}
}
#endif
int main()
{


	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  3*4*4
	printf("%d\n", sizeof(a[0][0]));//4  ��һ������ĵ�һ��Ԫ��
	printf("%d\n", sizeof(a[0]));//16   ��һ������    
	printf("%d\n", sizeof(a[0] + 1));//4   ��һ������ĵڶ���Ԫ��
	printf("%d\n", sizeof(*(a[0] + 1)));//4   ��һ������ĵڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16  
	printf("%d\n", sizeof(*a));//16   ��һ������ 
	printf("%d\n", sizeof(a[3]));//16  

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4  �ַ�����Ԫ�ص�ַ
	//printf("%d\n", sizeof(p + 1));//4  �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(*p));//1  ��һ��Ԫ��
	//printf("%d\n", sizeof(p[0]));//1  ��һ��Ԫ��
	//printf("%d\n", sizeof(&p));//4   �ַ�����ַ
	//printf("%d\n", sizeof(&p + 1));//4  ��һ���ַ�����ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4   �ڶ���Ԫ�ص�ַ

	//printf("%d\n", strlen(p));//6    ����ĳ��ȣ�������\0
	//printf("%d\n", strlen(p + 1));//5   �ӵ�һ��Ԫ�ؿ�ʼ��\0
	////printf("%d\n", strlen(*p));//����
	////printf("%d\n", strlen(p[0]));//����
	//printf("%d\n", strlen(&p));//����or��ȷ����ֵ
	//printf("%d\n", strlen(&p + 1));//    ��ȷ����ֵ����һ���ַ�������
	//printf("%d\n", strlen(&p[0] + 1));//5    �ӵڶ���Ԫ�ؿ�ʼ��\0


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  �����С����\0��β
	//printf("%d\n", sizeof(arr + 0));//4  ������Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1  ��һ��Ԫ��
	//printf("%d\n", sizeof(arr[1]));//1   �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));//4  ��������ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4  ��һ������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4  �ڶ���Ԫ�صĵ�ַ

	//printf("%d\n", strlen(arr));//6  ����ĳ��ȣ�������\0
	//printf("%d\n", strlen(arr + 0));//6   �ӵ�һ��Ԫ�ؿ�ʼ��\0
	////printf("%d\n", strlen(*arr));//����
	////printf("%d\n", strlen(arr[1]));//����
	//printf("%d\n", strlen(&arr));//6  �и澯���˴�arr������������ĵ�ַ����ֵ������Ԫ�ص�ַ��ͬ
	//printf("%d\n", strlen(&arr + 1));//��ȷ����ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5  �ӵڶ���Ԫ�ؿ�ʼ��\0


	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6  arr���������飬����Ϊ6
	//printf("%d\n", sizeof(arr + 0));//4  ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1  ��һ��Ԫ��
	//printf("%d\n", sizeof(arr[1]));//1  �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));//4   ��������ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4  ��һ������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4   �ڶ���Ԫ�صĵ�ַ

	////strlen(char *)�����ַ������ȣ���\0����
	////arr������û��\0�����˳��������ֱ������\0����
	//printf("%d\n", strlen(arr));//��ȷ����ֵ
	//printf("%d\n", strlen(arr + 0));//��ȷ����ֵ
	////printf("%d\n", strlen(*arr));//����
	////printf("%d\n", strlen(arr[1]));//����
	//printf("%d\n", strlen(&arr));//��ȷ����ֵ
	//printf("%d\n", strlen(&arr + 1));//��ȷ����ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//��ȷ����ֵ


	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16  sizeof(������)��a�����������飬��СΪ4*4=16
	//printf("%d\n", sizeof(a + 0));//4   �����һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*a));//4  ��һ��Ԫ��
	//printf("%d\n", sizeof(a + 1));//4  �ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4  �ڶ���Ԫ���൱�� *(a+1)
	//printf("%d\n", sizeof(&a));//4  &��������������������������ĵ�ַ����ַ�Ĵ�СΪ4
	//printf("%d\n", sizeof(*&a));//16  ��������
	//printf("%d\n", sizeof(&a + 1));//4  ��һ������ĵ�ַ
	//printf("%d\n", sizeof(&a[0]));//4   ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4  �ڶ���Ԫ�صĵ�ַ
	system("pause");
	return 0;
}
//int main()
//{
//	int arr[] = { 2, 5, 7, 2, 1, 0, 9, 34, 21 };
//	char c[] = { 'a', 'p', 'o', 'y', 'd', 'f','k','z','m'};
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	bubble(c, sizeof(c) / sizeof(c[0]), sizeof(char), cmp);
//	Print_int(arr, sizeof(arr) / sizeof(arr[0]));
//	Print_char(c, sizeof(c) / sizeof(c[0]));
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	qsort(c, sizeof(c) / sizeof(c[0]), sizeof(char), cmp);
//	Print_int(arr, sizeof(arr) / sizeof(arr[0]));
//	Print_char(c, sizeof(c) / sizeof(c[0]));
//	system("pause");
//	return 0;
//}