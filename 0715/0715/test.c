#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double i;
	int flag = -1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		flag = -flag;
		sum = flag*(1 / i) + sum;
	}
	printf("%f\n", sum);
	system("pause");//��ͣ�������������й��죬��Ҫͣһ���Ա���ÿ������н��
	return 0;
}
