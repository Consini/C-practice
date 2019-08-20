#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a = 0;
	float num = 0.0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++){
		num += log10(i);
	}
	printf("%d\n", (int)num + 1);
	system("pause");
	return 0;
}