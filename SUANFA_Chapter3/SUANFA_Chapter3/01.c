#define _CRT_SECURE_NO_WARNINGS 1
//1.编程打印形如图所示的n*n方阵。
//1     2    3    4    5    6    7
//24   25   26   27   28   29    8
//23   40   41   42   43   30    9
//22   39   48   49   44   31   10
//21   38   47   46   45   32   11
//20   37   36   35   34   33   12
//19   18   17   16   15   14   13
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, s, n;
	int a[10][10];
	printf("请输入矩阵的阶n=\n");
	scanf("%d", &n);
	k = 1, s = 0, i = 0;
	while (k <= n*n){
		for (j = s; j<n - s; j++){
			a[i][j] = k++;
		}
		j--;
		for (i = s + 1; i<n - s; i++){
			a[i][j] = k++;
		}
		i--;
		for (j = n - s - 2; j >= s; j--){
			a[i][j] = k++;
		}
		j++;
		for (i = n - s - 2; i >= s + 1; i--){
			a[i][j] = k++;
		}
		i++;
		s++;
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}






