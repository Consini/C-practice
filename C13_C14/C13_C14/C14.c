#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//ABCD\0     BCDA   CDAB
//实现一个函数，可以左旋字符串中的k个字符。 
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
void Left_move(char *str, int k)
{
	if (k < 0 || k >strlen(str)){
		printf("k值不正确\n");
		return;
	}
	while (k != 0){
		char *cur = str;
		char tmp = 0;
		tmp = *cur;
		while (*(cur + 1) != '\0'){
			*cur = *(cur + 1);
			cur++;
		}
		*cur= tmp;
		k--;
	}
	return;
}
//ABCDEF   BACDEF  BAFEDC   CDEFAB
void Reverse(char* left, char* right)
{
	assert(left != NULL && right != NULL);
	while (left < right){
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
void leftmove(char* str, int k)
{
	int len = strlen(str);
	Reverse(str, str + k - 1);
	Reverse(str + k, str + len - 1);
	Reverse(str, str+len-1);
	return;
}
int main()
{
	char str[]="ABCDEF";
	int k = 2;
	char* left = str;
	char* right =str+strlen(str)-1 ;
	/*Fun(str, k);
	printf("%s\n", str);*/
	/*Left_move(str, k);
	printf("%s\n", str);*/
	leftmove(str, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif



#if 0
//判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//给定s1 =AABCD和s2 = BCDAA，返回1 
//给定s1 = abcd和s2 = ACBD，返回0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Fun(char *s1, int k, int len)
{
	char *start = s1;
	char *end = s1 + len - 1;
	char tmp = 0;
	while (k){
		tmp = *start;
		for (int i = 0; i < len - 1; i++){
			*(start + i) = *(start + i + 1);
		}
		*end = tmp;
		Fun(s1, k - 1, len);
		return s1;
	}
}
int Judge(char s1[], char s2[], int len)
{
	for (int i = 1; i < len; i++){
		Fun(s1, i, len);
		if (strcmp(s1, s2) == 1){
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[20];
	char s2[20];
	scanf("%s", &s1);
	scanf("%s", &s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int ret = 0;
	if (len1 == len2)
	{
		ret = Judge(s1, s2, len1);
		if (1 == ret){
			printf("s2是s1旋转之后的字符串。\n");
		}
		else{
			printf("s2不是s1旋转之后的字符串。\n");
		}
	}
	else{
		printf("s1不是s2旋转之后的字符串。\n");
	}
	system("pause");
	return 0;
}


#endif
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void Reverse(char* l, char* r)
//{
//	while (l < r){
//		char tmp = *r;
//		*r = *l;
//		*l = tmp;
//		l++;
//		r--;
//	}
//	return;
//}
//void LeftMove(char *s1,int k)
//{
//	int len = strlen(s1);
//	Reverse(s1, s1+k - 1);
//	Reverse(s1 + k, s1 + len - 1);
//	Reverse(s1, s1 + len - 1);
//	return;
//}
int main()
{
	char s1[20] = "ABCDEF";
	char s2[] = "CDJIUD";
	if (strlen(s1) == strlen(s2))
	{
		strncat(s1, s1, strlen(s1));
		if (NULL == strstr(s1, s2)){
			printf("s2不是s1旋转之后的\n");
		}
		else{
			printf("s2是s1旋转之后的\n");
		}
	}
	else{
		printf("字符串长度不同\n");
	}
	
	/*int k = 3;
	char* left = s1;
	char* right = s1 + strlen(s1) - 1;
	LeftMove(s1,k);
	printf("%s\n", s1);*/
	system("pause");
	return 0;
}
