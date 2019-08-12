#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Count_One_Bits(unsigned int n)
{
	int num = 0;
	for (int i = 0; i < 32; i++){
		if ((n >> i & 1) == 1)//将数字逻辑右移i位，&按位与
		{
			num++;
		}
	}
	return num;
}
int main()
{
	int i = 0;
	int count = 0;
	scanf("%d", &i);
	count = Count_One_Bits(i);
	printf("%d二进制中1的个数为%d\n", i, count);
	system("pause");
	return 0;
}


//#include <stdio.h>
//#include<stdlib.h>
//void Replace(char s[], int len){
//	int spaceNum = 0;
//	int i = 0;
//	int newLen = 0;
//	for ( i = 0; i < len; i++){
//		if (s[i] == ' '){
//			spaceNum++;
//		}
//	}
//    newLen = len + spaceNum * 2;
//	while (i != 0){
//		if (s[i] == ' '){
//			i--;
//			s[newLen--] = '0';
//			s[newLen--] = '2';
//			s[newLen--] = '%';
//		}
//		else{
//			s[newLen--] = s[i--];
//		}
//	}
//	return;
//}
//int main(){
//	char str[] = "abc defgx yz";
//	printf("%s\n",str);
//	Replace(str, strlen(str));
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
