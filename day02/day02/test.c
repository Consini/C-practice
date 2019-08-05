#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void Replace(char s[], int len){
	int spaceNum = 0;
	int i = 0;
	int newLen = 0;
	for ( i = 0; i < len; i++){
		if (s[i] == ' '){
			spaceNum++;
		}
	}
    newLen = len + spaceNum * 2;
	while (i != 0){
		if (s[i] == ' '){
			i--;
			s[newLen--] = '0';
			s[newLen--] = '2';
			s[newLen--] = '%';
		}
		else{
			s[newLen--] = s[i--];
		}
	}
	return;
}
int main(){
	char str[] = "abc defgx yz";
	printf("%s\n",str);
	Replace(str, strlen(str));
	printf("%s\n",str);
	system("pause");
	return 0;
}
