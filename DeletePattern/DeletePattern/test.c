#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* deletePattern(char *s1, char *s2){
	int a[256] = { 0 };
	while (*s2 != '\0'){
		a[*s2] = 1;
		s2++;
	}
	char *p1 = s1;
	char *p2 = s1;
	while (*p1 != '\0'){
		if (a[*p1] != 1){
			*p2 = *p1;
			p2++;
		}
		p1++;
	}
	*p2 = '\0';
	return s1;
}
int main(){
	char s1[] =  "They are students." ;
	char *s2 = "aeiou";
	printf("%s\n",deletePattern(s1, s2));
	system("pause");
	return 0;
}