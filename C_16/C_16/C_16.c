#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//1.模拟实现strcpy     char *strcpy( char *strDestination, const char *strSource );
//把strSource 拷贝到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Copystr(char *strD, const char *strS)
{
	int lend = strlen(strD);
	int lens = strlen(strS);
	for (int i = 0; i <= lens; i++){
		*(strD + i) = *(strS + i);
	}
	return;
}
int main()
{
	char str1[20] = "ABCDEFG";
	char *str2 = "HELLO";
	Copystr(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}



//2.模拟实现strcat     char *strcat(char *strDestination, const char *strSource);
//把strSource 连接到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
void Mystrcat(char *strDestination, const char *strSource)
{
	int lend = strlen(strDestination);//6
	int lens = strlen(strSource);//6
	for (int i = 0; i <= lens; i++){
		*(strDestination + lend + i) = *(strSource + i);
	}
	return;
}
int main()
{
	char strD[20] = "HELLO ";
	char strS[] = "WORLD!";
	Mystrcat(strD, strS);
	printf("%s\n", strD);
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
char* My_strstr(const char *str,const char *strc)
{
	assert(str != NULL);
	assert(strc != NULL);
	if ('\0' == *strc){
		return (char*)str;
	}
	while ('\0' != *str){
		const char *s = str;
		const char *c = strc;
		while ('\0' != *c){
			if (*s != *c){
				break;
			}
			else{
				s++;
				c++;
			}
		}
		if ('\0' == *c){
			return (char*)str;
		}
		str++;
	}
	return NULL;
}
int main()
{
    const char* str1 = "ABCDEFG";
	const char* str2 = "CDE";
	printf("%s\n", My_strstr(str1, str2));
	system("pause");
	return 0;
}



//4.char *strchr( const char *string, int c );
//从string左边开始查找字符c，找到则返回c首次出现的位置，没找到返回NULL
#include<stdlib.h>
#include<stdio.h>
int My_strchr(char *str,const char* c, int len)
{
	for (int i = 0; i < len; i++){
		if (str[i] == *c){
			return i + 1;
		}
	}
	return -1;
}
int main()
{
	char str[] = "ABCDEFG";
	const char *c = "D";
	int len = sizeof(str) / sizeof(str[0]);
	int ret = My_strchr(str, c, len);
	printf("%d\n", ret);
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
	while (*str != '\0' || '\0' != *strc){
		if (*str > *strc){
			return 1;
		}
		else{
			return -1;
		}
		str++;
		strc++;
	}
	if (*str == '\0' && '\0' == *strc){
		return 0;
	}
}
int main()
{
	const char *str = "ABCDEFG";
	const char *strc = "ABCDG";
	int ret = My_strcmp(str, strc);
	switch (ret){
	case 0:
		printf("两个字符串相等\n");
		break;
	case 1:
		printf("字符串str大于字符串strc\n");
		break;
	case -1:
		printf("字符串str小于字符串strc\n");
		break;
	default:
		printf("结果错误\n");
		break;
	}
	system("pause");
	return 0;
}






//6.void *memcpy( void *dest, const void *src, size_t count );
//从src的起始位置拷贝count个字节目标到dest的位置中，返回指向dest的指针
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void *My_memcpy(char* str,const char *strc, int n)
{
	assert(*str != NULL && *strc != NULL);
	while (n)
	{
		*str = *strc;
		str++;
		strc++;
		n--;
	}
	/*for (int i = 0; i < n; i++){
		*(str + i) = *(strc + i);
	}*/
	*(str + n) = '\0';
	return str;
}
int main()
{
	char str1[] = "ABCDEFG";
	const char* str2 = "HELLO WORLD!";
	int n = 7;
	My_memcpy(str1, str2, n);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
#endif



//7.void *memmove( void *dest, const void *src, size_t count );
//从src的起始位置移动count个字节目标到dest的位置中，返回指向dest的指针,保证正确性
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void *My_memmove(char *dest, const char* src, int count)
{
	assert(dest != NULL && src != NULL);
	char *pd = dest;
	const char *ps = src;
	/*if (pd <= ps && pd >= ps + count){*///内存不冲突
	if (pd > ps){
		while (count--){
			*pd++ = *ps++;
		}
	}
	else{
		while (count--){
			*(pd + count) = *(ps + count);
		}
	}
	return dest;
}
int main()
{
	char str1[] = "ABCDEFGdwidh";
	const char *str2 = "Attitude to life!";
	int n = 9;
	My_memmove(str1, str2, n);
	printf("%s\n", str1);
	system("pause");
	return 0;
}




