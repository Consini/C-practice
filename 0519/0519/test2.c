#define _CRT_SECURE_NO_WARNINGS 1





#if 0
//ʵ��һ�����������ַ����е�ÿ���ո��滻��%20
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
char *Replace(char *a, int len)
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
	Replace(a, strlen(a));
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
	char *p1 = arr;
	char *p2;
	int len = 0;//����Ԫ�ظ���
	int count = 0;//�ո����
	while (*p1 != '\0'){
		len++;
		if (*p1 == ' '){
			count++;
		}
		p1++;
	}
	p2 = p1 + 2 * count;
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
	int index = 0;//�±�
	int count = 0;//�ո����
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
	while (index != 0){
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
	//Replace1(a);//ָ����
	Replace2(a, strlen(a));//�����±���
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif