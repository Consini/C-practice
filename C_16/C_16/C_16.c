#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//1.模拟实现strcpy     char *strcpy( char *strDestination, const char *strSource );
//把strSource 拷贝到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *Copystr(char *strD, const char *strS)
{
	char *p = strD;
	while (*strD++ = *strS++){
	}
	return p;
	/*char *p = strD;
	while (*strS != '\0'){
		*strD = *strS;
		strD++;
		strS++;
	}
	*strD = '\0';
	return p;*/
}
int main()
{
	char str1[20] = "ABCDEFG";
	char *str2 = "HELLO";
	printf("%s\n", Copystr(str1, str2));
	system("pause");
	return 0;
}



//2.模拟实现strcat     char *strcat(char *strDestination, const char *strSource);
//把strSource 连接到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
char *Mystrcat(char *strDestination, const char *strSource)
{
	char *p = strDestination;
	while ('\0' != *strDestination){
		strDestination++;
	}
	while (*strDestination++ = *strSource++){
	}
	return p;
}
char *Mystrncat(char *strDestination, const char *strSource,int n)
{
	char *p = strDestination;
	while ('\0' != *strDestination){
		strDestination++;
	}
	for(;n>0;n--){
		*strDestination++ = *strSource++;
	}
	return p;
}
int main()
{
	char strD[20] = "HELLO ";
	char strS[] = "WORLD!";
	//printf("%s\n", Mystrcat(strD, strS));
	printf("%s\n", Mystrncat(strD, strS,3));
	system("pause");
	return 0;
}




//3.char *strstr( const char *string, const char *strCharSet );
//在string查看是否有字符串strCharSet，有则从首次发现strCharSet处返回string，没有返回NULL，
//若strCharSet长度为0，返回string
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <assert.h>
//朴素算法   KMP
const char* My_strstr(const char *str, const char *strc)
{
	assert(str != NULL);
	assert(strc != NULL);
	const char *s1 = NULL;
	const char *s2 = NULL;
	const char *start = str;
	while (*start != '\0'){
		s1 = start;//s1回退到上一次的下一个位置
		s2 = strc;//s2回退到str的起始位置
	    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2){
			s1++;
			s2++;
	   }
	   if (*s1 == '\0'){
	   return NULL;
	   }
	   if (*s2 == '\0'){
	   return start;
	   }
	   start++;
	}
	return NULL;

	//不完善
	/*while (*str != '\0'){
		const char *p = str;
		while (*str != '\0' && *strc != '\0' && *str == *strc){
			str++;
			strc++;
		}
		if (*str == '\0'){
			return NULL;
		}
		if (*strc == '\0'){
			return p;
		}
		str++;
	}*/
	//原先版本
	//if ('\0' == *strc){
	//	return (char*)str;
	//}
	//while ('\0' != *str){
	//	const char *s = str;
	//	const char *c = strc;
	//	while ('\0' != *c){
	//		if (*s != *c){
	//			break;
	//		}
	//		else{
	//			s++;
	//			c++;
	//		}
	//	}
	//	if ('\0' == *c){
	//		return str;
	//		//return (char*)str;
	//	}
	//	str++;
	//}
	//return NULL;
}
int main()
{
    const char* str1 = "ABCCDEFG";
	const char* str2 = "CD";
	printf("%s\n", My_strstr(str1, str2));
	system("pause");
	return 0;
}



//4.char *strchr( const char *string, int c );
//从string左边开始查找字符c，找到则返回c首次出现的位置，没找到返回NULL
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
//int My_strchr(char *str,const char* c, int len)
//{
//	for (int i = 0; i < len; i++){
//		if (str[i] == *c){
//			return i + 1;
//		}
//	}
//	return -1;
//}
const char *My_strchr(const char *str,char *c)
{
	assert(str != NULL);
	while (*str != '\0'){
		if (*str == *c){
			return str;
		}
		str++;
	}
	return NULL;
}
int main()
{
	/*char str[] = "ABCDEFG";*/
	char *str = "ABCDEFG";
	char *c = "D";
	printf("%s\n", My_strchr(str, c));
	//int len = sizeof(str) / sizeof(str[0]);
	//printf("%d\n", My_strchr(str, c, len));
	system("pause");
	return 0;
}




//5.int strcmp( const char *string1, const char *string2 );
//比较两个字符串大小，string1大返回>0,string1小于string2返回<0,相等返回0
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
int My_strcmp(const char* str, const char *strc)
{
	assert(str != NULL && NULL != strc);
	while (*str == *strc){
		if (*str == '\0'){
			return 0;
		}
		str++;
		strc++;
	}
	if (*str > *strc){
		return 1;
	}
	else {
		return -1;
	}
	
	//while (*str != '\0' || '\0' != *strc){
	//	if (*str > *strc){
	//		return 1;
	//	}
	//	else{
	//		return -1;
	//	}
	//	str++;
	//	strc++;
	//}
	//if (*str == '\0' && '\0' == *strc){
	//	return 0;
	//}
}
//函数原型int strncmp( const char *string1, const char *string2, size_t count );
//比较str1和str2前n个字符的大小
int My_strncmp(const char* str, const char *strc,int n)
{
	assert(str != NULL && NULL != strc);
	while (n--){
		while (*str == *strc){
			if (*str == '\0'){
				return 0;
			}
			str++;
			strc++;
		}
		if (*str > *strc){
			return 1;
		}
		else {
			return -1;
		}
	}
}
int main()
{
	//const char *str = "ABCDEFG";
	//const char *strc = "ABCDG";
	//printf("%d\n", My_strcmp("abcd", "abcd"));
	//printf("%d\n", My_strcmp("abed", "abcd"));
	//printf("%d\n", My_strcmp("abcd", "abed"));
	
	printf("%d\n", My_strncmp("abed", "abcd",3));
	printf("%d\n", My_strncmp("abcd", "abed",3));
	printf("%d\n", My_strncmp("abcd", "abcd", 3));
	//int ret = My_strcmp(str, strc);
	//switch (ret){
	//case 0:
	//	printf("两个字符串相等\n");
	//	break;
	//case 1:
	//	printf("字符串str大于字符串strc\n");
	//	break;
	//case -1:
	//	printf("字符串str小于字符串strc\n");
	//	break;
	//default:
	//	printf("结果错误\n");
	//	break;
	//}
	system("pause");
	return 0;
}
#endif



#if 0
//6.void *memcpy( void *dest, const void *src, size_t count );内存拷贝函数
//从src的起始位置拷贝count个字节目标到dest的位置中，返回指向dest的指针
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void *My_memcpy(char* str,const char *strc, int n)
{
	assert(str != NULL && strc != NULL);
	while (n--){
		*(char *)str++ = *(char *)strc++;
	}
	//for (int i = 0; i < n; i++){
	//	*(str + i) = *(strc + i);
	//}
	return str;
}
int main()
{
	char str1[] = "ABCDEFG";
	const char* str2 = "HELLO WORLD!";
	int arr1[20] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	My_memcpy(arr1, arr2, 16);
	My_memcpy(str1, str2, 7);
	printf("%s\n",str1);
	system("pause");
	return 0;
}



//7.void *memmove( void *dest, const void *src, size_t count );
//从src的起始位置移动count个字节目标到dest的位置中，返回指向dest的指针,保证正确性
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void *My_memmove(char *dest, const char* src, int count)
{
	assert(dest != NULL && src != NULL);
	void *p = dest;
	if (dest < src){
		while (count--){
			*(char *)dest++ = *(char *)src++;
		}
	}
	else{
		while (count--){
			*((char *)dest+count) = *((char *)src+count);
		}
	}
	return p;
	//char *pd = dest;
	//const char *ps = src;
	///*if (pd <= ps && pd >= ps + count){*///内存不冲突
	//if (pd > ps){
	//	while (count--){
	//		*pd++ = *ps++;
	//	}
	//}
	//else{
	//	while (count--){
	//		*(pd + count) = *(ps + count);
	//	}
	//}
	//return dest;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	//My_memmove(arr, arr + 2, 16);
	My_memmove(arr+2, arr, 16);

	/*char str1[] = "ABCDEFGdwidh";
	const char *str2 = "Attitude to life!";
	int n = 9;
	My_memmove(str1, str2, n);
	printf("%s\n", str1);*/
	system("pause");
	return 0;
}
#endif



