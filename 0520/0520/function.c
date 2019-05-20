#define _CRT_SECURE_NO_WARNINGS 1
//2. 青蛙跳台阶问题
#include<stdio.h>
#include<stdlib.h>
int Step(int n)
{
	if ( n < 3){
		return n;
	}
	else{
		return Step(n - 1) + Step(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Step(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


#if 0
//1. 汉诺塔问题
#include<stdio.h>
#include<stdlib.h>
void Move(char pos1, char pos2)
{
	printf("%c--->%c\n", pos1, pos2);
}
void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1){
		Move(pos1, pos3);
	}
	else{
		Hanoi(n - 1, pos1, pos3, pos2);
		Move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	Hanoi(3, 'A', 'B', 'C');
	system("pause");
	return 0;
}
#endif