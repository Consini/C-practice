#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct index{
	int x;
	int y;
}A;
A arrIndex;
void sumK(int a[], int len, int k){
	int left = 0;
	int right = len - 1;
	while (left < right){
		if (a[left] + a[right] < k){
			left++;
		}
		else if (a[left] + a[right] > k){
			right--;
		}
		else{
			arrIndex.x = left;
			arrIndex.y = right;
			break;
		}
	}
}
int main(){
	int a[] = { 1, 3, 5, 7, 8, 12, 15 };
	int k = 20;
	sumK(a, sizeof(a) / sizeof(a[0]), k);
	printf("[%d,%d]\n",arrIndex.x,arrIndex.y );
	system("pause");
	return 0;
}