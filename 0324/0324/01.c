#define _CRT_SECURE_NO_WARNINGS 1
//Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;//��������  3
//	int a = 0;//�������������  2
//	int i = 0;
//	int sum = 0;//��  2+22+222
//	int tmp = 0;//ǰ�����  2  2+22  2+22+222
//	scanf("%d%d",&n,&a);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a; //2  22  222
//		sum += tmp; //2   2+22  2+22+222
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}



#if 0
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,n;
	for (i = 100; i < 1000; i++)
	{
		n = pow(i % 10, 3) + pow((i % 100) / 10, 3) + pow(i / 100, 3);
		if (n == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
#endif



#if 0
//��ӡ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0, j;
	scanf("%d", &line);
	//�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		for (j = 0; j< line - 1 - i; j++)
		//for (j = 0; j< line - 1 ; j++)
		{
			printf(" ");
			//line--;
		}
		//��ӡ*��
		for (j = 0; j< 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 0; i < line-1; i++)
	{
		//for (j = 0; j< i+1; j++)
		for (j = 0; j<= i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j< 2 * (line-i-1)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif






