#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int maxSubArray(int* nums, int numsSize){
	int sum = 0;
	int ans = nums[0];
	for (int i = 0; i < numsSize; i++){
		if (sum > 0){
			sum += nums[i];
		}
		else{
			sum = nums[i];
		}
		if (sum > ans){
			ans = sum;
		}
	}
	return ans;
}
int FirstUniqChar(char s[],int len){
	int a[26] = { 0 };
	int i = 0;
	for (i = 0; i < len; i++){
		a[s[i] - 'a'] ++;
	}
	for (i = 0; i < len; i++){
		if (a[s[i] - 'a'] == 1){
			return i;
		}
	}
	return -1;
}
int main(){
	char str[] = "leetvodeyiqw";
	printf("%d\n",FirstUniqChar(str,strlen(str)));

	//int a[10];
	//for (int i = 0; i < 10; i++){
	//	scanf("%d", &a[i]);
	//}
	//printf("最大子序列和为 %d\n",maxSubArray(a, 10));
	system("pause");
	return 0;
}