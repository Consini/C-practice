#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//É¾³ýÊ×Î²¿Õ¸ñ
char* Trim1(char *a){
	char *p1, *p2;
	p1 = a;
	p2 = a + strlen(a) - 1;
	while (p1 <= p2 && *p1 == ' '){
		p1++;
	}
	while (p2 >= p1 && *p2 == ' '){
		p2--;
	}
	*(++p2) = '\0';
	return p1;
}

char* Trim2(char *a){
	char *end, *p1, *p2;
	int len;
	p1 = a;
	end = a + strlen(a) - 1;
	p2 = end;
	while (p1 <= end && isspace(*p1)){
		p1++;
	}
	while (p2 >= p1 && isspace(*p2)){
	p2--;
	}
	len = (p2 < p1) ? 0 : (p2 - p1) + 1;
	p1[len] = '\0';
	return p1;
}
char *Delete(char s[])
{
	int i = 0;
	s = Trim1(s);
	//s = Trim2(s);
	char *str = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			*str++ = s[i];
		}
		if ((s[i] == ' ') && !(s[i + 1] == ' ')) 
		{
			*str++ = s[i];
		}
	}
	*str = '\0';
	return s;
}

int main()
{
	char a[] = {" jis q	iq   ss	  "}; 
	printf("%s", Delete(a));
	system("pause");
	return 0;
}