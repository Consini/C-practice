#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;  //1 2 3 4 a=0,则不进行后面的运算，i=0
	i = a++ || ++b || d++;  //1 3 3 4  i=1  不考虑d
	printf("a = %d  b = %d  c = %d  d = %d\n", a, b, c, d); 
	system("pause");
	return 0;
} 