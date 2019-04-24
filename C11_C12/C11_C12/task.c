#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<stdlib.h>
void Fun1(int n){
	for (int i = 31; i > 0; i-=2){
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
	for (int i = 30; i >= 0; i -= 2){
		printf("%d", ((n >> i) & 1));
	}
}
int main()
{
	Fun1(11);
	system("pause");
	return 0;
}
#endif
#if 0
//返回参数中1的个数,正负数都可以
int count_num(unsigned int n){
	int count = 0;
	while (n){
		count++;
		n = n&(n - 1);
	}
	return count;
}
int main()
{
	int num = count_num(-1);
	printf("%d\n", num);
	system("pause");
	return 0;
}



//4. 有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student". 
// 要求： 不能使用库函数。 只能开辟有限个空间（空间个数和字符串的长度无关）。 
//student a am i
//i ma a tneduts
//i am a student
#include<stdio.h>
#include<stdlib.h>
int Mystrlen(char* str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		*str + 1;
	}
	return count;
}
void Change(char* l,char* r){//单词逆置
	char t = 0;
	while (l < r){
		 t =* l;
		* l =* r;
		* r = t;
		l++;
		r--;
	}
}
void Reverse(char* str)
{//整体逆置
	int len = Mystrlen(str);
	//assert(str != NULL);
	Change(str, str + len - 1);
	//单词逆置
	while ('\0' != *str)//当str所指向的内容不为\0时，开始循环
	{
		char* start = str;
		char* end = start;//start和end指向同一个字符
		while ((' ' != *end) && ('\0' != *end))//当end不符合结束条件时
		{
			end++;            //end往后移，寻找空格或者\0
		}
		Change(start, end-1);//单词逆置
		if ('\0' != *end)//后面还有单词，end+1指向下一个单词
		{
			str = end + 1;
		}
		else
		{
			str = end;//end为\0,赋给str，退出循环
		}
	}
}
int main()
{
	char a[] = "student a am i";
	Reverse(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif


#if 0
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的，请找出这个数字。（使用位运算） 
#include<stdio.h>
#include<stdlib.h>
int Find(int *arr, int len){
	int tmp = 0;
	for (int i = 0; i < len; i++){
		tmp ^= arr[i];
	}
	return tmp;
}
int main(){
	int arr[] = { 1, 5, 8, 6, 8, 1, 5, 2, 2 };
	int len = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	ret = Find(arr,len);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif


#if 0
//不使用（a+b）/2这种方式，求两个数的平均值
#include<stdio.h>
#include<stdlib.h>
float Average(int a, int b)
{
	int sum = a + b;
	if (1 == sum % 2){
		float result = (sum >> 1)+ 0.5;
		return result;
	} 
	else{
		int result = sum >> 1;
		return result;
	}
}
int Ave(int a, int b){
	return ((a&b) + ((a^b) >> 1));//(a+b) == (a&b)*2 + (a^b) --> (a+b)/2 == (a&b) + ((a^b)>>1)
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%f\n", Average(a, b));
	printf("%d\n", Ave(a, b));
	system("pause");
	return 0;
}




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// unsigned int reverse_bit(unsigned int value)，这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
unsigned int Reverse_bit1(unsigned int value)
{
	int ret = 0;
	int num = 0;
	int result = 0;
	while (value){
		for (int i =31; i >=0; i--){
			ret = value % 2;
			value /= 2;
				if (1 == ret)
				{
					num = pow(2, i);
					result += num;
				}
		}
	}
	return result;
}
unsigned int Reverse_bit2(unsigned int n)
{
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++){
		sum += (((n >> i) & 1)*(pow(2, 31 - i)));
	}
	return sum;
}
int main()
{
	int n = 0;
	int result = 0;
	scanf("%d", &n); 
	result=Reverse_bit1(n);
	printf("%u\n", result);
	printf("%u\n", Reverse_bit2(n));
	system("pause");
	return 0;
}
#endif

#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, j = 0;
	int line= 0;
	int a[20][20] = { 0 ,1 };
	printf("请输入杨辉三角的行数:");
	scanf("%d", &line);
	for (i = 1; i <= line; i++){
		for (j = 1; j <= line-i; j++){//打印空格
			printf("  ");
		}
		a[i][1] = 1;
		for (j = 1; j <= i; j++){
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%-2d  ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;//嫌疑犯
	for (x = 'A'; x <= 'D'; x++){
		if (3 == ('A' != x)+('C' == x)+('D' == x)+('D' !=x )){
			printf("嫌疑犯是%c\n", x);
		}
	}
	system("pause");
	return 0;
}


int main()
{
	for (int A = 1; A < 6; A++)
	{
		for (int B = 1; B < 6; B++)
		{
			for (int C = 1; C < 6; C++)
			{
				for (int D = 1; D < 6; D++)
				{
					for (int E = 1; E < 6; E++)
					{
						if ((((2 == B) || (3 == A) == 1) && ((2 == B) || (4 == E) == 1)	&& \
							((1 == C) || (2 == D) == 1) && ((5 == C) || (3 == D) == 1) && \
							((4 == E) || (1 == A) == 1)) && (120 == A * B * C * D * E))
						{
							printf("A= %d B= %d C=%d D=%d E=%d\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
#endif
