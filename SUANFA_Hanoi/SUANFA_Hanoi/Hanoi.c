#define _CRT_SECURE_NO_WARNINGS 1
//��ŵ��(Hanoi)���⣺�Ŵ���һ��������������3��������A��������64�����ӣ����Ӵ�С���ȣ�������£�С������
//��һ���Ϻ������������A���Ƶ�B������ÿ��ֻ���ƶ�һ�����ӣ�3�������ϵ����Ӷ�ʼ�ձ��ִ�����£�С������
//�ƶ������п�������C������������������ƶ����̡�
//1��ÿ��ֻ���ƶ�һ�����ӡ�
//2�����ӿ��Է�����A��B��C���е��κ�һ�������ϡ�
//3���κ�ʱ�򶼲��ܽ�һ���ϴ�����ӷ��ڽ�С�������ϡ�
//�ݹ��㷨��
#include<stdio.h>
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("\t%c->%c\n", a, b);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("\t%c->%c\n", a, b);
		hanoi(n - 1, c, b, a);
	}
}
int main()
{
	int n;
	printf("������Ҫ�ƶ��Ŀ���: ");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
}
//�ǵݹ��㷨��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int main()
{
	long long i, res, t, k; int n, s;
	scanf("%d", &n);
	res = (1 << n) - 1;
	printf("%lld\n", res);
	for (i = 1; i <= res; i++){
		for (t = 2, s = 1; s <= n; s++, t *= 2)if (i%t == t / 2) break;//i%t=t/2 �� ��i���ƶ���S����
		k = i / t;//��õ�S�� �ڼ����ƶ� 
		if (n % 2 == s % 2){// ��ʱ��
			if ((k + 1) % 3 == 0) printf("%d from B to A\n", s);
			if ((k + 1) % 3 == 1) printf("%d from A to C\n", s);
			if ((k + 1) % 3 == 2) printf("%d from C to B\n", s);
		}
		else{// ��ʱ��
			if ((k + 1) % 3 == 0) printf("%d from C to A\n", s);
			if ((k + 1) % 3 == 1) printf("%d from A to B\n", s);
			if ((k + 1) % 3 == 2) printf("%d from B to C\n", s);
		}
	}
	system("pause");
	return 0;
}
