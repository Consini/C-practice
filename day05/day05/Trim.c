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
/*�ڶ�������Ҳ��ͬ����˼·��ֻ���ڴ�������һЩ��ͬ����������ָ�룬
p1 ָ�����ַ���p2 �� endָ��β�ַ����ƶ� p1 ��p2�ҵ���Ϊ�ո���ַ���
�� end ָ��ָ�� p2 ����һ���ַ����� end��Ϊ������ '\0'������ p1��*/
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
	len = (p2 < p1) ? 0 : (p2 - p1) + 1;//���ַ���ȫΪ�ո�p1���Ƶ�p2�ĺ��棬��ô���p1>p2�����ؿա�
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