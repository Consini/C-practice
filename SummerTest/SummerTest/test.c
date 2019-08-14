#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Change(int *pX)
{
	int y = 8;
	y = y - *pX;
	pX = &y;
	return 0;
}

int main()
{
	int xx = 3;
	int *pY = &xx;
	Change(pY);// 值传递，不能改变指针
	printf("%d\n", *pY);//  3
	system("pause");
	return 0;
}

//int main(){
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++){
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	system("pause");
//	return 0;
//}