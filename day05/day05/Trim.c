#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
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
/*第二个函数也是同样的思路，只是在代码上有一些不同。定义三个指针，
p1 指向首字符，p2 和 end指向尾字符。移动 p1 ，p2找到不为空格的字符。
将 end 指针指向 p2 的下一个字符，将 end设为结束符 '\0'，返回 p1。*/
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
	len = (p2 < p1) ? 0 : (p2 - p1) + 1;//若字符串全为空格，p1会移到p2的后面，那么如果p1>p2，返回空。
	p1[len] = '\0';
	return p1;
}
int main(){
	char a[] = "  wqd  dwdqw    ";
	printf("%s",Trim1(a));
	printf("%s", Trim2(a));
	system("pause");
	return 0;
}