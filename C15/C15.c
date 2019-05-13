#define _CRT_SECURE_NO_WARNINGS 1
//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。找出这两个只出现一次的数字，编程实现。
//void qsort( void *buf, size_t num, size_t size, int (*compare)(const void *, const void *) );
//功能： 对buf 指向的数据(包含num 项, 每项的大小为size)进行快速排序。
//如果函数compare 的第一个参数小于第二个参数，返回负值；
//如果等于返回零值；如果大于返回正值。函数对buf 指向的数据按非降序排序。
#if 0
#include<stdio.h>
#include<stdlib.h>
int compare(const void *valuel1,const void *valuel2)
{
	return *(int*)valuel1 - *(int*)valuel2;
}
void FindNumber1(int *arr, int len)
{
	qsort(arr, len, sizeof(int), compare);
	for (int i = 0; i < len; ){
		if (arr[i] != arr[i + 1]){
			printf("%d %d\n", arr[i], arr[i + 1]);
			break;
		}
		else{
			i += 2;
		}
	}
}
int Exclusiveor(int *arr, int len)
{
	int tmp = 0;
	for (int i = 0; i < len; i++){
		tmp ^= arr[i];
	}
	return tmp;
}
void FindNumber2(int *arr, int len)
{
	int i = 0;
	int arr1[10] = { 0 };
	int ret1 = 0;
	int ret2 = 0;
	int num=Exclusiveor(arr, len);//异或数组
	for (; i < 32; i++){
		if ((num & 1) == 0){
			num >>= 1;
		}
		else{
			break;
		}
	}
	for (int j = 0; j < len; j++){
		int tmp = 0;
		tmp = arr[j] >> i;
		if ((tmp & 1) == 1){
			arr1[j] = tmp;
		}
		ret1=Exclusiveor(arr1, len);
	}
	ret2 = ret1^num;
	printf("%d %d\n", ret1, ret2);
	return;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);//len=10
	FindNumber1(arr, len);//对数组进行升序排序，然后对比相邻两个元素看是否相等，若不等，则为所找数字
	FindNumber2(arr, len);//
	system("pause");
	return 0;
}



//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
#include<stdio.h>
#include<stdlib.h>
int Fun(int k)
{
	int sum = k;
	int n = 1, s ;
	while (n!=0){
		n = k / 2;
		s = k % 2;
		k = n + s;
		sum += n;
	}
	return sum;
}
int main()
{
	int money = 0;//钱数
	int total = 0; //喝的饮料总数
	int empty = 0;//空瓶子数
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty > 1)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	//num = Fun(n);
	//printf("%d\n", num);
	system("pause");
	return 0;
}
#endif




//3.模拟实现strcpy
//Copy a string.
//char *strcpy( char *strDestination, const char *strSource );
//把strSource 拷贝到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Copystr(char *strD,const char *strS)
{
	int lend = strlen(strD);
	int lens = strlen(strS);
	for (int i = 0; i <= lens; i++){
		*(strD + i) = *(strS + i);
	}
	return;
}
int main()
{
	char str1[20] = "ABCDEFG";
	char *str2 = "HELLO";
	//char str2[] = "HELLO";
	Copystr(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}


#if 0
//4.模拟实现strcat
//Append a string.
//char *strcat(char *strDestination, const char *strSource);
//把strSource 连接到strDestination，返回strDestination
#include<stdio.h>
#include<stdlib.h>
void Mystrcat(char *strDestination, const char *strSource)
{
	int lend = strlen(strDestination);//6
	int lens = strlen(strSource);//6
	for (int i = 0; i <= lens;i++){
		*(strDestination + lend+i) = *(strSource + i);
	}
	return;
}
int main()
{
	char strD[20] = "HELLO ";
	char strS[] = "WOARD!";
	Mystrcat(strD, strS);
	printf("%s\n", strD);
	system("pause");
	return 0;
}
#endif

