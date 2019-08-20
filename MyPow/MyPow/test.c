//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int Poweruint1(int a, unsigned int ex)//低效率
//{
//	int ret = 1;
//	//for (unsigned int i = 0; i <= ex; i++){
//	//	ret *= a;
//	//}
//	while (ex--){
//		ret *= a;
//	}
//	return ret;
//}
//int Poweruint2(int a, unsigned int n)//位运算效率比乘除法和求余运算高
//{
//	if (1 == n){
//		return a;
//	}
//	int ret = Poweruint2(a, n >> 1);
//	//double ret = Poweruint2(a, n/2);
//	ret *= ret;
//	if (1 == (n & 1)){
//		ret *= a;
//	}
//	//if (1 == (n % 2)){
//	//	ret *= a;
//	//}
//	return ret;
//}
//double Power(int base, int exponent)
//{
//	double result = 1.0;
//	unsigned int ex = (unsigned int)exponent;
//	if (exponent < 0){//指数为负数时先转化为正数
//		ex = (unsigned int)(-exponent);
//	}
//	result = Poweruint1(base, ex);
//	//result = Poweruint2(base, ex);
//	if (exponent < 0){
//		result = 1.0 / result;
//	}
//	return result;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%f\n", Power(x, y));
//	system("pause");
//	return 0;
//}