//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int isPalindrome1(int x){
//	if (x < 0 || (x != 0 && x % 10 == 0)){
//		return 0;
//	}
//	int num = 0;
//	while (x > num){
//		num = num * 10 + x % 10;
//		x /= 10;
//	}
//	return x == num || x == (num / 10);
//}
//int isPalindrome2(int x){
//	if (x < 0 || (x != 0 && x % 10 == 0)){
//		return 0;
//	}
//	int div = 1;
//	while (x / div >= 10){
//		div *= 10;
//	}
//	while (x > 0){
//		if (x / div != x % 10){
//			return 0;
//		}
//		x = (x % div) / 10;
//		div /= 100;
//	}
//	return 1;
//}
//int main(){
//	int x = 0;
//	scanf("%d", &x);
//	if (isPalindrome2(x) == 1){
//		printf("%d是回文数\n", x);
//	}
//	else{
//		printf("%d不是回文数\n", x);
//	}
//	system("pause");
//	return 0;
//}