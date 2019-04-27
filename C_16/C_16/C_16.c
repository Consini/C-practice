#define _CRT_SECURE_NO_WARNINGS 1
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
char My_strstr( char *str, char *strc)
{
	while (*str != '\0'){
		while (*strc != '\0'){
			if (*str == *strc){
				str++;
				strc++;
			}
			else{
				break;
			}
		}
		if (*strc == '\0'){
			return *str;
		}
		str++;
	}
	return NULL;
}
int main()
{
    char str1[] = "ABCDEFG";
	char str2[] = "CDE";
	My_strstr(str1, str2);
	printf("%s\n", str1);
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
int main()
{
	const char *str = "ABCDEFG";
	const char *strc = "zbxw";
	system("pause");
	return 0;
}
#endif





//6.void *memcpy( void *dest, const void *src, size_t count );
//从src的起始位置拷贝count个字节目标到dest的位置中，返回指向dest的指针
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void My_memcpy(char* str,const char *strc, int n)
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



#if 0
//7.void *memmove( void *dest, const void *src, size_t count );
//从src的起始位置移动count个字节目标到dest的位置中，返回指向dest的指针,保证正确性
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
void My_memmove(char *str, const char* strc, int count)
{
	assert(*str != NULL && *strc != NULL);
	if (str <= strc && str >= strc + count){//内存不冲突
		while (count--){
			*str++ = *strc++;
		}
		return str;
	}
	else{
		while (count--){
			*(str + count) = *(strc + count);
		}
	}
}
int main()
{
	char str1[] = "ABCDEFG";
	const char *str2 = "Attitude to life!";
	int n = 10;
	My_memmove(str1, str2, n);
	printf("%s\n", str1);
	system("pause");
	return 0;
}

#endif
