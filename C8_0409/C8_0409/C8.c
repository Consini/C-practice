//#define _CRT_SECURE_NO_WARNINGS 1
////assert 断言，不是函数，是宏。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Move(char pos1, char pos2){
//	printf("%c--->%c  ", pos1, pos2);
//}
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	Hanoi(n - 1, pos1, pos3, pos2);
//	Move(pos1, pos3);
//	Hanoi(n - 1, pos2, pos1, pos3);
//}
//int main()
//{
//
//}
//
//
//#if 0
//void Reserve(char *str)
//{
//	char tmp = 0;
//	int len = strlen(str) - 1;
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		tmp = *str;
//		*str=*(str + len);
//		*(str + len) = '\0';
//		Reserve(str+1);
//		*(str + len) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = { "hello" };
//	Reserve(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//
//
//void Reserve(char *str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = { "hello" };
//	Reserve(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//
//int Strlen1(char *str)
//{
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen1(str + 1);
//	}
//}
//int Strlen2(char *str)
//{
//	int count = 0;
//	assert(*str != NULL)//断言指针不为空，避免指针出错
//	while (*str != '\0'){
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "asdfghjkl";
//	int num1 = Strlen1(str);
//	int num2 = Strlen2(str);
//	printf("%d %d\n", num1,num2);
//	system("pause");
//	return 0;
//}
//#endif