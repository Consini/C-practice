#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//char *strncpy( char *strDest, const char *strSource, size_t count );
char *Mystrncpy(char *dest, const char *stc, int count)
{
	assert(dest != NULL && stc != NULL);
	char *p = dest;
	while (count--){
		*dest++ = *stc++;
	}
	*dest = '\0';
	return p;
}
//char *strncat( char *strDest, const char *strSource, size_t count );×Ö·ûÆ´½Ó
char *Mystrncat(char *dest, const char *stc, int count)
{
	assert(dest != NULL && stc != NULL);
	char *p = dest;
	while (*dest != '\0'){
		dest++;
	}
	//for (; count > 0; count--){
	//	*dest++ = *stc++;
	//}
	while (count--){
		*dest++ = *stc++;
	}
	*dest = '\0';
	return p;
}
//int strncmp( const char *string1, const char *string2, size_t count );
int Mystrncmp(const char *str1, const char *str2, int count)
{
	assert(str1 != NULL && str2 != NULL);
	while (count--){
		while (*str1 == *str2){
			if (*(str1+count) ==*(str2+count)){
				return 0;
			}
				str1++;
				str2++;	
		}
		if (*str1 > *str2){
			return 1;
		}
		else{
			return-1;
		}
	}
}
int main()
{
	char arr[20] = "hello ";
	const char *str = "world!";
	const char *string = "woruild!";
	//Mystrncpy(arr, str, 4);
	//Mystrncat(arr, str, 4);
	Mystrncat(arr, arr, 4);
	printf("%s\n", arr);
	//int ret = Mystrncmp(str, string, 3);
	//printf("%d\n", ret);
	system("pause");
	return 0;
}