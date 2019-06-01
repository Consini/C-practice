#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void Permutation(char *start, char *end)
{
	assert(start);
	if (*end == '\0'){
		printf("%s\n", start);
	}
	for (char *p = end; *p != '\0'; p++){
		char tmp = *p;
		*p = *end;
		*end = tmp;
		Permutation(start, (end + 1));
		tmp = *p;
		*p = *end;
		*end = tmp;
	}
	return;
}
int main()
{
	char a[] = "abc";
	Permutation(a,a);
	system("pause");
	return 0;
}
#endif