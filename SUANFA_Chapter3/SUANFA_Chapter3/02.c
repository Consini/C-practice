//#define _CRT_SECURE_NO_WARNINGS 1
//2.д������ackermann����ack(m, n)�ĵݹ���㺯��������m >= 0, n >= 0��ack(m, n)����Ϊ��
//ack(0, n) = n + 1;
//ack(m, 0) = ack(m - 1, 1);
//ack(m, n) = ack(m - 1, ack(m, n - 1));
//�ݹ���㺯����
//#include <stdio.h>
//#include<stdio.h>
//int Ack(int m, int n);
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%d\n", Ack(m, n));
//	system("pause");
//	return 0;
//}
//int Ack(int m, int n)
//{
//	if (m == 0)
//		return n + 1;
//	if (n == 0 && m > 0)
//		return Ack(m - 1, 1);
//	if (m > 0 && n > 0)
//		return Ack(m - 1, Ack(m, n - 1));
//}
