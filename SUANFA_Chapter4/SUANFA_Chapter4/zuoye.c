//#define _CRT_SECURE_NO_WARNINGS 1
////2.���ӳ������⣬���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ��������
////�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ�����������Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����������
////����10�����������ʱ��ֻʣ�����������ˡ��ʵ�һ�����ժ�¶��ٸ����ӣ�
//#include<stdio.h>
//int main()
//{
//	int x = 2;
//	for (int i = 9; i >= 1; i--)
//		x = (x + 2) * 2;
//	printf("��һ��ժ��%d������\n", x);
//	return 0;
//}
//
//
////6.����ٵ����⣺��100ƥ����100������������3����������2������ƥС����1�����ʴ��У�С�����٣�
//#include<stdio.h>
//int main(void)
//{
//	int i, j, k;
//	for (i = 1; i <= 33; i++)
//	for (j = 1; j <= 50; j++)
//	{
//		k = 100 - i - j;
//		if (k % 2 == 0)
//		{
//			if (3 * i + 2 * j + k / 2 == 100)
//				printf("����%d,����%d,С��%d\n", i, j, k);
//		}
//	}
//	return 0;
//}
//
//
////9.���÷��η���һ����������������������С����������
//#include<stdlib.h>
//#include <stdio.h>
//int a[] = { 2, 3, 4, 5, 34, 7, 9, 6, 43, 21 };
//void getminmax(int i, int j, int *min1, int *min2, int *max2, int *max1)
//{
//	int mid;
//	int lmin1, lmin2, lmax1, lmax2;
//	int rmin1, rmin2, rmax1, rmax2;
//	if (i == j)
//		*min1 = *min2 = *max1 = *max2 = a[i];
//	else if (i == j - 1)
//	if (a[i]<a[j]){
//		*max1 = a[j];
//		*max2 = a[i];
//		*min1 = a[i];
//		*min2 = a[j];
//	}
//	else{
//		*max1 = a[i];
//		*max2 = a[j];
//		*min1 = a[j];
//		*min2 = a[i];
//	}
//	else{
//		mid = (i + j) / 2;
//		getminmax(i, mid, &lmin1, &lmin2, &lmax2, &lmax1);
//		getminmax(mid + 1, j, &rmin1, &rmin2, &rmax2, &rmax1);
//		if (lmin1 < rmin1){
//			if (lmin2 < rmin1){
//				*min1 = lmin1;
//				*min2 = lmin2;
//			}
//			else{
//				*min1 = lmin1;
//				*min2 = rmin1;
//			}
//		}
//		else
//		if (lmin1 > rmin2){
//			*min1 = rmin1;
//			*min2 = rmin2;
//		}
//		else{
//			*min1 = rmin1;
//			*min2 = lmin1;
//		}
//		if (lmax1>rmax1)
//		if (lmax2>rmax1){
//			*max1 = lmax1;
//			*max2 = lmax2;
//		}
//		else{
//			*max1 = lmax1;
//			*max2 = rmax1;
//		}
//		else
//		if (rmax2>lmax1){
//			*max1 = rmax1;
//			*max2 = rmax2;
//		}
//		else{
//			*max1 = rmax1;
//			*max2 = lmax1;
//		}
//	}
//}
//
//int main()
//{
//	int min1, min2, max1, max2;
//	int n = sizeof(a) / sizeof(a[0]);
//	getminmax(0, n - 1, &min1, &min2, &max2, &max1);
//	printf("min1=%d min2=%d max1=%d max2=%d\n", min1, min2, max2, max1);
//	system("pause");
//	return 0;
//}
//
////������ͼ�Ǳ�����ֵ�ĳ�������Ľֵ�ͼ��
////- 50 - 47 36 - 30 - 23
////17 - 19 - 34 - 43 - 8
////- 42 - 3 - 43 34 - 45
//#include<stdio.h>
//int maxSub(int a[]);//����������к�
//int main(void)
//{
//	int a[5][3] = {
//		{ -50, 17, -42 },
//		{ -47, -19, -3 },
//		{ 36, -34, -43 },
//		{ -30, -43, 34 },
//		{ -23, -8, -45 }
//	};
//	int i, j;
//	int max, n;
//	int maxRoute = 0;
//	int route[10];//����������ν�ÿһ�е�����ֵ
//	for (i = 0; i<5; i++)
//	{
//		max = a[i][0];//maxΪ��i�е�����ֵ
//		n = 0;//����ֵ�к�
//		for (j = 0; j<3; j++)//����ÿһ��Ԫ��
//		{
//			if (a[i][j]>max)
//			{
//				max = a[i][j];
//				n = j;
//			}
//		}
//		route[i] = max;
//		printf("a[%d][%d]=%d\n", i, n, max);
//	}
//	maxRoute = maxSub(route);
//	printf("���·�߳���Ϊ��%d\n", maxRoute);
//	system("pause");
//	return 0;
//}
//int maxSub(int a[])
//{
//	int maxSum = 0, headSum = 0;
//	int i;
//	for (i = 0; i<5; i++)
//	{
//		headSum += a[i];
//		if (headSum>maxSum)
//			maxSum = headSum;
//		else if (headSum<0)
//			headSum = 0;
//	}
//	return maxSum;
//}
////13. ��һ��n*m�ķŸ��У�mΪ������������n*m������������ʾ�������м���·���һ���ˣ�
////���˿ɰ���5������ǰ��������Խ��������ÿ�߹�һ���������ȡ�˷����е�����
////Ҫ���ҵ�һ���ӵ׵�����·����ʹ�������֮��Ϊ���������͵�ֵ��
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a[6][7] = {
//		{ 16, 4, 3, 12, 6, 0, 3 },
//		{ 4, -5, 6, 7, 0, 0, 2 },
//		{ 6, 0, -1, -2, 3, 6, 8 },
//		{ 5, 3, 4, 0, 0, -2, 7 },
//		{ -1, 7, 4, 0, 7, -5, 6 },
//		{ 0, -1, 3, 4, 12, 4, 2 }
//	};
//	int b[6][7], c[6][7];
//	int i, j, k;
//	int max;
//	int flag;
//	int temp;
//	for (i = 0; i<6; i++)
//	for (j = 0; j<7; j++)
//	{
//		b[i][j] = a[i][j];
//		c[i][j] = -1;
//	}
//	for (i = 1; i<5; i++)
//	{
//		for (j = 0; j<7; j++)
//		{
//			max = 0;
//			for (k = j - 2; k <= j + 2; k++) {
//				if (k<0)
//					continue;
//				else
//				if (k>6)
//					break;
//				else
//				{
//					if (b[i][j] + b[i - 1][k]>max) {
//						max = b[i][j] + b[i - 1][k]; flag = k;
//					}
//				}
//			}
//			b[i][j] = max;
//			c[i][j] = flag;
//		}
//	}
//	for (j = 1; j <= 5; j++)
//	{
//		max = 0;
//		for (k = j - 2; k <= j + 2; k++) {
//			if (k<0)
//				continue;
//			else
//			if (k>6)
//				break;
//			else
//			{
//				if (b[i][j] + b[i - 1][k]>max) {
//					max = b[i][j] + b[i - 1][k]; flag = k;
//				}
//			}
//		}
//		b[i][j] = max;
//		c[i][j] = flag;
//	}
//	max = 0;
//	for (j = 1; j <= 5; j++)
//	{
//		if (b[i][j]>max)
//		{
//			max = b[i][j];
//			flag = j;
//		}
//	}
//	printf("%d\n", max);
//	temp = c[i][flag];
//	printf("%5d", a[i][temp]); for (j = i; j>0; j--)
//	{
//		temp = c[j][temp];
//		printf("%5d", a[j - 1][temp]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
////14.ĳ��ҵ�������Ÿ��ݹ��Ҽƻ��İ��ţ��⽫ĳ�ָ�Ч�ʵ�5̨������
////�����������A��B��C3�������������ػ�����ֻ����󣬿���Ϊ����ӯ�����±���ʾ��
////�ʣ���5̨������η����������������ʹ����ӯ�����
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int A[6] = { 0, 3, 7, 9, 12, 13 };
//	int B[6] = { 0, 5, 10, 11, 11, 11 };
//	int C[6] = { 0, 4, 6, 11, 12, 12 };
//	int AB[6][6];
//	int temp[6];
//	int abc[6];
//	int max;
//	int flag;
//	int i, j, k;
//	for (i = 0; i <= 5; i++)
//	{
//		max = 0;
//		for (j = 0; j <= i; j++)
//		{
//			AB[i][j] = A[i - j] + B[j];
//			if (AB[i][j]>max)
//				max = AB[i][j];
//		}
//		temp[i] = max;
//	}
//	max = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		abc[i] = temp[i] + C[5 - i];
//		if (abc[i]>max)
//		{
//			max = abc[i];
//			flag = i;
//		}
//	}
//	printf("max=%d\n", max);
//	printf("c=%d\n", 5 - flag);
//	max = max - C[5 - flag];
//	for (i = 0; i <= flag; i++)
//	{
//		if (AB[flag][i] == max)
//		{
//			printf("b=%d\n", i);
//			printf("a=%d\n", flag - i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
////17.ĳһӡˢ��������ӹ����񣬶�ӡˢ�����װ����������ʱ����±�ʱ�䵥λ���죩
////���� ����1 ��2 ��3 ��4 ��5 ��6
////���������੤����������������������������
////ӡˢ���䩦�� ���� ��  ��   ��  11
////װ�����䩦�� ���� ��  ��  ��  ��
////���ÿ������Ҫ��ȥӡˢ����ӡˢ���ٵ�װ������װ��������ΰ�����6��ӹ�����ļӹ�����ʹ�ӹ�ʱ�����١�
//#include<stdio.h>
//#include<stdlib.h>
//int job[6][2] = { { 3, 8 }, { 12, 10 }, { 5, 9 }, { 2, 6 }, { 9.3 }, { 11, 1 } };
//int x[6], bestx[6], f1 = 0, bestf, f2[7] = { 0 };
//void try(int i);
//void swap(int a, int b);
//int main(void)
//{
//	int i, j;
//	bestf = 32767;
//	for (i = 0; i<6; i++)
//		x[i] = i;
//	try(0);
//	for (i = 0; i<6; i++)
//		printf("%d ", bestx[i]);
//	printf("\nbestf=%d\n", bestf);
//	system("pause");
//	return 0;
//}
//void try(int i)
//{
//	int j;
//	if (i == 6)
//	{
//		for (j = 0; j<6; j++)
//			bestx[j] = x[j];
//		bestf = f2[i];
//	}
//	else
//	{
//		for (j = i; j<6; j++)
//		{
//			f1 = f1 + job[x[j]][0];
//			if (f2[i]>f1)
//				f2[i + 1] = f2[i] + job[x[j]][1]; else
//				f2[i + 1] = f1 + job[x[j]][1];
//			if (f2[i + 1]<bestf)
//			{
//				swap(i, j);
//				try(i + 1);
//				swap(i, j);
//			}
//			f1 = f1 - job[x[j]][0];
//		}
//	}
//}
//void swap(int i, int j)
//{
//	int temp;
//	temp = x[i];
//	x[i] = x[j];
//	x[j] = temp;
//}
//
//
////19.��д�ö�̬�滮������������㷨��
//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int buf[100];
//	int m, n;
//	int i, j;
//	buf[0] = 1;
//	buf[1] = 1;
//	scanf("%d%d", &n, &m);
//	for (i = 1; i<n; i++)
//	{
//		buf[i + 1] = buf[i];
//		for (j = i; j>0; j--)
//		{
//			buf[j] = buf[j] + buf[j - 1];
//		}
//	}
//	printf("%d\n", buf[m]);
//	system("pause");
//	return 0;
//}
//
//
