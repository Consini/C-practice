//#define _CRT_SECURE_NO_WARNINGS 1
//4. A, B, C, D, E5人为某次竞赛的前五名, 他们在公布名次前猜名次。
//A说 : B得第三名, C得第五名。
// B说 : D得第二名, E得第四名。
//  C说 : B得第一名, E得第四名。
//   D说 : C得第一名, B得第二名。
//	A说 : D得第二名, A得第三名。
//		 结果每个人都猜对了一半, 实际名次是什么呢 ?
//		 程序如下：
//#include<stdio.h>
//#include<stdlib.h>
//		 int main()
//{
//			 int a, b, c, d, e;
//			 for (a = 1; a <= 5; a++)
//			 {
//				 for (b = 1; b <= 5; b++)
//				 {
//					 if (a != b)
//					 for (c = 1; c <= 5; c++)
//					 {
//						 if (c != a&&c != b)
//						 for (d = 1; d <= 5; d++)
//						 {
//							 if (d != a&&d != b&&d != c)
//							 {
//								 e = 15 - a - b - c - d;
//								 if ((b == 3) + (c == 5) == 1 && (d == 2) + (e == 4) == 1 && (b == 1) + (e == 4) == 1 && (c == 1) + (b == 2) == 1 && (d == 2) + (a == 3) == 1)
//									 printf("A是第%d名 B是第%d名 C是第%d名 D是第%d名 E是第%d名\n", a, b, c, d, e);
//							 }
//						 }
//					 }
//				 }
//			 }
//			 system("pause");
//			 return 0;
//		 }
