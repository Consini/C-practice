#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		int count = 0;
//		int sum = 0;//�������for����ڲ���ÿ��ѭ����ʼ��Ϊ0,
//		int tmp;
//		tmp = i;
//		//�ж�i�Ǽ�λ����
//		while (tmp != 0)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//�����λ�ϵ����ֲ����
//		tmp = i;
//		while (tmp != 0)
//		{
//			sum += pow((tmp % 10), count);
//			tmp = tmp/10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//







#if 0
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;//����������ӣ�������2+22+222
	int a;//���ּ�����2
	int i = 0;
	int tmp = 0, sum = 0;
	scanf("%d%d", &n, &a);
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;//�ܺ�
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
#endif




#if 0
//1.����Ļ���������ͼ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	scanf("%d", &line);
	//�ϰ벿��
	for (i = 0; i <= line; i++)
	{
		//��ӡ�ո�
		for (j = 0; j <= line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 0; i <= line - 1; i++)
	{
		//��ӡ�ո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif






//int is_leap_year(int y)
//{
//	return(((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0));
//	/*if ((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0)
//	{
//		return 1;
//	}
//		return 0;*/
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}





//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= i / 2; j += 2)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < -200; i++)
//	{
//		if (is_prime(i) == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	system("pause");
//}
