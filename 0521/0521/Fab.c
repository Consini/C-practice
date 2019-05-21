#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<stdlib.h>
int Fib(int n)
{
	if (n <= 2){
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
    int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数为%d\n", n,ret );
	system("pause");
	return 0;
}
#endif


#include <stdio.h>
#include<stdlib.h>
int Fib(int n)
{
	int a = 1, b = 1, c = 1;
	if (n < 3){
		return c;
	}
	else{
		for (int i = 3; i <= n; i++){
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数为%d\n", n,ret );
	system("pause");
	return 0;
}
