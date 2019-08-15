#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
int main(){
	int a[10];
	for (int i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	printf("最大子序列和为 %d\n",maxSubArray(a, 10));
	system("pause");
	return 0;
}