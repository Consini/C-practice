#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<stdlib.h>
int equal(double a, double b)//比较两个浮点数是否相等
{
	if ((a - b) > -0.000001 && (a - b) < 0.000001){
		return 1;
	}
	else{
		return 0;
	}
}
double Poweruint1(double a, unsigned int ex)//for循环
{
	double ret = 1.0;
	//for (unsigned int i = 0; i <= ex; i++){
	//	ret *= a;
	//}
	while (ex--){
		ret *= a;
	}
	return ret;
}
double Poweruint2(double a, unsigned int n)//位运算
{
	if (0 == n){
		return 1.0;
	}
	if (1 == n){
		return a;
	}
	double ret =  Poweruint2(a, n >> 1);
	//double ret = Poweruint2(a, n/2);
	ret *= ret;
	if (1 == (n & 1)){
		ret *= a;
	}
	//if (1 == (n % 2)){
	//	ret *= a;
	//}
	return ret;
}
double Power(double base, int exponent)//a^n
{
	int flag = 0;
	double result = 1.0;
	unsigned int ex = (unsigned int)exponent;
	if (equal(base, 0.0) && exponent < 0){//底数为0并且指数小于0
		flag = 1;
		return 0.0;
	}
	if (exponent < 0){//指数为负数时先转化为正数
		ex = (unsigned int)(-exponent);
	}
	/*result = Poweruint1(a, ex);*/
	result = Poweruint2(base, ex);
	if (exponent < 0){
		result = 1.0 / result;
	}
	return result;
}
int main()
{
	double result = Power(0,0);
	printf("%f\n", result);
	system("pause");
	return 0;
}
#endif