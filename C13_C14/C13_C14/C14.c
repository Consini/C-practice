#define _CRT_SECURE_NO_WARNINGS 1

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//����s1 =AABCD��s2 = BCDAA������1 
//����s1 = abcd��s2 = ACBD������0
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Fun(char *s1,int k,int len)
//{
//		char *start = s1;
//		char *end = s1 + len - 1;
//		char tmp = 0;
//		while (k){
//			tmp = *start;
//			for (int i = 0; i < len - 1; i++){
//				*(start + i) = *(start + i + 1);
//			}
//			*end = tmp;
//			Fun(s1,k - 1,len);
//			return s1;
//		}
//}
//int Judge(char s1[], char s2[],int len)
//{
//	for (int i = 1; i < len; i++){
//		Fun(s1,i,len);
//		if (strcmp(s1, s2) == 1){
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[20];
//	char s2[20];
//	scanf("%s", &s1);
//	scanf("%s", &s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	int ret = 0;
//	if (len1 == len2)
//	{
//		ret = Judge(s1, s2,len1);
//		if (1 == ret){
//			printf("s1��s2��ת֮����ַ�����\n");
//		}
//		else{
//			printf("s1����s2��ת֮����ַ�����\n");
//		}
//	}
//	else{
//		printf("s1����s2��ת֮����ַ�����\n");
//	}
//	system("pause");
//	return 0;
//}


//ABCD\0     BCDA   CDAB
//ʵ��һ�����������������ַ����е�k���ַ��� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char Fun(char *str, int k)
{
    assert(str != NULL);
	int len = strlen(str);
	char *start = str;
	char *end = str + len - 1;
	char tmp = 0;
	if (k < len){
		while (k){
			tmp = *start;
			for (int i = 0; i < len - 1; i++){
				*(start + i) = *(start + i + 1);
			}
			*end = tmp;
			Fun(str, k - 1);
			return *str;
		}
	}
	return 0;
}
int main()
{
	char str[20];
	int k = 0;
	scanf("%s", &str);
	scanf("%d", &k);
	Fun(str, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}