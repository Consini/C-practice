#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//5.һ������n(n <= 100)�����ж��ַֻ����ֻ�����֮��Ϊn�����磺
//����n = 6
//6
//5 1
//4 2
//4 1 1
//3 3
//3 2 1
//3 1 1 1
//2 2 2
//2 2 1 1
//2 1 1 1 1
//1 1 1 1 1 1
//Total = 11{��ʾ�ֻ�����11��}
//��n�ķֻ�����
//Դ���룺
#include<stdio.h>
#include<stdlib.h>
int divinteger(int n, int m);
int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("��%d�ֻ���\n", divinteger(n, n));
	system("pause");
	return 0;
}
int divinteger(int n, int m)
{
	if (n<1 || m<1)
	{
		printf("error");
	}
	else
	if (n == 1 || m == 1)
	{
		return 1;
	}
	else
	if (n<m)
		return divinteger(n, n);
	else
	if (n == m)
		return 1 + divinteger(n, n - 1);
	else
		return divinteger(n, m - 1) + divinteger(n - m, m);
}
#endif