#ifndef _0331_DAY06_H_
#define _0331_DAY06_H_
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#endif
//局部变量存放在栈
//要修改字符串的内容，需要定义字符数组 char* arr 为只读，不能改变内容
//数组在什么时候确定大小    编译
//什么时候开辟内存    运行
//在哪里开辟   栈 ->>最多开辟多少？？1M或者2M
//arr[i] ->> *(arr+i) 中的[]自带解引用