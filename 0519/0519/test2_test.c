#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char *Replace(char *a)
{
	assert(a);
	int len = 0;//数组元素个数
	int count = 0;//空格个数
	char *p = a;
	char *p2;
	while (*p != '\0'){
		if (*p == ' '){
			count++;
		}
		p++;
		len++;
	}
	p2 = p + 2*count;
	while (p != a){
		if (*p == ' '){
			p--;
			*(p2--) = '0';
			*(p2--) = '2';
			*(p2--) = '%';
		}
		else{
			*(p2--) = *(p--);
		}
	}
	return a;
}
int main()
{
	char a[40] = "to be or not to be";
	Replace(a);//指针解决
	printf("%s\n", a);
	system("pause");
	return 0;
}