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
//���ز�����1�ĸ���,������������
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



//4. ��һ���ַ����������Ϊ:"student a am i", ���㽫��������ݸ�Ϊ"i am a student". 
// Ҫ�� ����ʹ�ÿ⺯���� ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� 
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
void Change(char* l,char* r){//��������
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
{//��������
	int len = Mystrlen(str);
	//assert(str != NULL);
	Change(str, str + len - 1);
	//��������
	while ('\0' != *str)//��str��ָ������ݲ�Ϊ\0ʱ����ʼѭ��
	{
		char* start = str;
		char* end = start;//start��endָ��ͬһ���ַ�
		while ((' ' != *end) && ('\0' != *end))//��end�����Ͻ�������ʱ
		{
			end++;            //end�����ƣ�Ѱ�ҿո����\0
		}
		Change(start, end-1);//��������
		if ('\0' != *end)//���滹�е��ʣ�end+1ָ����һ������
		{
			str = end + 1;
		}
		else
		{
			str = end;//endΪ\0,����str���˳�ѭ��
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
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵģ����ҳ�������֡���ʹ��λ���㣩 
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
//��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ
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
// unsigned int reverse_bit(unsigned int value)����������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
	printf("������������ǵ�����:");
	scanf("%d", &line);
	for (i = 1; i <= line; i++){
		for (j = 1; j <= line-i; j++){//��ӡ�ո�
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
	int x;//���ɷ�
	for (x = 'A'; x <= 'D'; x++){
		if (3 == ('A' != x)+('C' == x)+('D' == x)+('D' !=x )){
			printf("���ɷ���%c\n", x);
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
