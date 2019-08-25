#define _CRT_SECURE_NO_WARNINGS 1
#define MOD(x,y) x%y
#include<stdio.h>
#include<stdlib.h>
int x = 3;
int f(int a){
	int b = 0;
	static int c = 3;
	a = c++; b++;
	return (a);
}
void inc(){
	static x = 1;
	x *= (x + 1);
	printf("%d", x);
	return;
}
int main(){

	unsigned long u = 0x11000000;
	printf("%x\n", *(unsigned char *)&u);

	//char *p = "bule1";
	//char a[] = "bule1";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(a));
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(a));

	//int x = 0;
	//switch (++x){
	//case 0:++x;
	//case 1:++x;
	//case 2:++x;
	//}
	//printf("%d", x);

	//int a = 13, b = 94;
	//printf("%d", MOD(b, a + 4));

	//int i;
	//for (i = 1; i < x; i++){
	//	inc();
	//}

	//int a = 2, i, k;
	//for (i = 0; i < 2; i++){
	//	k = f(a++);
	//}
	//printf(" % d\n", k);// 4 
	system("pause");
	return 0;
}