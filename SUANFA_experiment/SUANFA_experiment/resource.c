#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//资源分配问题
//设有资源n（n为整数），分配给m个项目，gi(x)为第i个项目分得资源x(x为整数)所得到的利润。
//求总利润最大的资源分配方案，也就是解下列问题：
#include<stdio.h>
void main(){
	int i, j, k, m = 3, n = 7, rest, a[100][100], gain[100];
	float q[100], f[100], temp[100];
	printf("How many item?\n");
	scanf("%d", &m);
	printf("How many money?\n");
	scanf("%d", &n);
	printf("input one item gain table :\n");
	for (j = 0; j <= n; j++){
		scanf("%lf", &q[j]);
		f[j] = q[j];
	}
	for (j = 0; j <= n; j++){
		a[1][j] = j;
	}
	for (k = 2; k <= m; k++){
		printf("Please input another item gain table :\n");
		for (j = 0; j <= n; j++){
			temp[j] = q[j];
			scanf("%lf", &q[j]);
			a[k][j] = 0;
		}
		for (j = 0; j <= n; j++){
			for (i = 0; i <= j; i++){
				if (f[j - i] + q[i]>temp[j]){
					temp[j] = f[j - i] + q[i];
					a[k][j] = i;
				}
			}
		}
		for (j = 0; j <= n; j++){
			f[j] = temp[j];
		}
	}
	rest = n;
	for (i = m; i >= 1; i--){
		gain[i] = a[i][rest];
		rest = rest - gain[i];
	}
	for (i = 1; i <= m; i++){
		printf("%d ", gain[i]);
	}
	printf("%.2lf", f[n]);
}
#endif