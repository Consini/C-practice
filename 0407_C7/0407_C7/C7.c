#define _CRT_SECURE_NO_WARNINGS 1
#include "C7.h"
int Fib(int n)//µÝ¹é
{
	if (n <= 2){
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int NFib(int n)//·ÇµÝ¹é
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
int Power(int n,int k)//µÝ¹é
{	
	int ret = 0;
	if ( k <2 ){
		return n;
	}
	else
	{
		return n*Power(n, k - 1);
	}
}
int DigitSum(int n)
{
	if (n / 10 == 0)
	{
		return n;
	}
	else
	{
		return n % 10 + DigitSum(n / 10);
	}
}
int Strlen(char *p)//µÝ¹é
{
	while (*p == '\0'){
		return 0;
	}
		return 1 + Strlen(p + 1);
}
int NStrlen(char *p)//·ÇµÝ¹é
{
	int ret = 0;
	while ('\0' != *p){
		p++;
		ret++;
	}
	return ret;
}
//int Factoria1(int n)//µÝ¹é
//{
//	if (1 == n){
//		return 1;
//	}
//	else{
//		return n* Factorial(n - 1);
//	}
//}
//int Factoria2(int n)//·ÇµÝ¹é
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
void Print(int n)//µÝ¹é
{
	if (n > 9){
		Print(n / 10);
	}
		printf("%d ", n%10);
}
void Reverse(char *p)
{
	int len = strlen(p);
	if (len <= 1){
		return p;
	}
	else{
		char tmp = p[0];
		p[0]=p[len-1];
		p[len - 1] = '\0';
		Reverse(p + 1);
		p[len - 1] = tmp;

	}
}
