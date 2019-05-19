#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//实现一个函数，把字符串中的每个空格替换成%20
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
char *Replace(char *a,int len)
{
	char *p = a;
	int count = 0;
	while (len--){
		if (*p == ' '){
			*p = '%';
			p++;
			memmove(p + 2, p, len);
			*(p++) = '2';
			*(p++) = '0';
		}
		else{
			p++;
		}
	}
	return a;
}
int main()
{
	char a[40] = "to be or not to be";
	Replace(a,strlen(a));
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif

#if 0
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
char *Replace1(char *arr)
{
	assert(arr);
	char *p1 =arr;
	char *p2;
	int len = 0;//数组元素个数
	int count = 0;//空格个数
	while (*p1 != '\0'){
		len++;
		if (*p1 == ' '){
			count++;
		}
		p1++;
	}
	p2 =p1+2 * count;
	while (p1 != arr){
		if (*p1 == ' '){
				p1--;
				*(p2--) = '0';
				*(p2--) = '2';
				*(p2--) = '%';
		}
		else{
			*(p2--) = *(p1--);
		}
	}
	return arr;
}
void Replace2(char a[], int len){
	int index = 0;//下标
	int count = 0;//空格个数
	int end = 0;
	if (a == NULL || len < 0){
		return;
	}
	for (; index < len; index++){
		if (a[index] == ' '){
			count++;
		}
	}
	//while (len--){
	//	if (a[index] == ' '){
	//		count++;
	//	}
	//	index++;
	//}//index==18,len==0
	end = index + 2 * count;
      while ( index != 0){
		if (a[index] == ' '){
			index--;
			a[end--] = '0';
			a[end--] = '2';
			a[end--] = '%';			
		}
		else{
			a[end--] = a[index--];
		}
	}
		return;
}
int main()
{
	char a[40] = "to be or not to be";
	//Replace1(a);//指针解决
	Replace2(a,strlen(a));//数组下标解决
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif






//杨氏矩阵
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Findnum1(int arr[][4], int row, int col, int num)
{
	int i = 0;
	int j = col - 1;
	if (num > arr[row-1][col-1] || num < arr[0][0]){
		return 0;
	}
	while (i < row - 1 && j >= 0){
		if (arr[i][j] > num){
			j--;
		}
		else if (arr[i][j] < num){
			i++;
		}
		else{
			return num;
		}
	}
	return 0;
}
int Findnum2(int arr[][4], int num){
	int i = 3;
	int j = 0;
	if (num > arr[3][3] || num < arr[0][0]){
		return 0;
	}
	while (i >= 0 && j <= 3){
		if (num > arr[i][j]){
			j++;
		}
		else if (num < arr[i][j]){
			i--;
		}
		else{
			return num;
		}
	}
	return 0;
}
int main()
{
	int a[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int ret = 0;
	//ret = Findnum1(a,4,4, 80);//右上角开始查找
	ret = Findnum2(a, 8);//左下角开始查找
	if (ret){
		printf("找到数字%d\n", ret);
	}
	else{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
