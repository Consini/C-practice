#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define F(X,Y) ((X)+(Y))
int change(int *px){
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}
char *myString(){
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer)-1; i++){
		buffer[i] = *(s + 1);
	}
	return buffer;
}
int f(int x, int y){
	return (x&y) + ((x^y) >> 1);
}
int main(){

	//char s1[8] = "good!";
	//char s2[8] = { 'g', 'o', 'o', 'd', '!' };
	//char *p = "good!";
	//char s3[5] = { 'g', 'o', 'o', 'd', '!' };
	//printf("%d\n", strlen(s1));
	//printf("%d\n", strlen(s2));
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(s3));
	
	//int i, x, y;
	//i = x = y = 0;
	//do{
	//	++i;
	//	if (i % 2)
	//		x += i;
	//	i++;
	//	y += i++;
	//} while (i <= 7);
	//printf("%d,%d,%d", i, x, y);

	//int i = 10;
	//long long t = sizeof(++i);
	//printf("%d", i);

	//char *s = "abcde";
	//s += 2;
	//printf("%lu\n", s);


	//int x = 1, y = 012;
	//printf("%d", y*x++);

	//int arr[] = { 6, 7, 8, 9, 10 };
	//int *p = arr;
	//*(p++) += 123;
	//printf("%d,%d", *p, *(++p));//8,8

	
	//printf("%d", f(2, 4));

	//unsigned char a = 0xA5;
	//unsigned char b = ~a >> 4 + 1;
	//printf("%d", b);

	//printf("%s\n", myString());

	//int i = 1;
	//printf("%d,%d", sizeof(i++), i);

	//int x[] = { 1, 2, 3, 4, 5, 6 };
	//int *p = x;
	//p += 2;
	//printf("%d", *p++);

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *p = (int *)((int)a + 1);
	//printf("%x", p[0]);

	//unsigned long a = 0x11000000;
	//printf("%x\n", *(unsigned char *)&a);

	//char *p = "blue1";
	//char a[] = "bule1";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(a));
	//printf("%d\n",sizeof(p) );
	//printf("%d\n", sizeof(a));

	//char s[] = { "\\123456\123456\t" };
	//printf("%d\n", strlen(s));

	//int xx = 3;
	//int *py = &xx;
	//change(py);
	//printf("%d\n", *py);

	//int a = 3, b = 4;
	//printf("%d\n", F(a++, b++));
	system("pause");
	return 0;
}
