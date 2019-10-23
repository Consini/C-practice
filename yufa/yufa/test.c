#include<stdio.h>
#include<stdlib.h>
char a[21], optr[10], op, s;
int opnd[10], i, j, k, x1, x2, x3;
int operand(char s)
{
	if ((s >= 48) && (s <= 57)) return 1;
	else return 0;
}
int f(char s)
{
	switch (s) {
	case '+':return 4; break;
	case '*':return 6; break;
	case 'i':return 6; break;
	case '(':return 2; break;
	case ')':return 6; break;
	default:return 0;
	}
}
int g(char s)
{
	switch (s) {
	case '+':return 3; break;
	case '*':return 5; break;
	case 'i':return 7; break;
	case '(':return 7; break;
	case ')':return 2; break;
	default:return 0;
	}
}
void get()
{
	s = a[i];
	i++;
}
void main()
{
	printf(" 请输入表达式（以‘ # ’结束）： \n");
	i = 0;
	do {
		i++;
		scanf("%c", &a[i]);
	} while (a[i] != '#');
	i = j = k = 1;
	optr[j] = '#';
	get();
	while (!((optr[j] == '#') && (s == '#')))
	{
		if (operand(s)) { opnd[k] = s - 48; k++; get(); }
		else if (f(optr[j])<g(s)) { j++; optr[j] = s; get(); }
		else if (f(optr[j])>g(s))
		{
			op = optr[j];
			j--;
			x1 = opnd[k - 1];
			x2 = opnd[k - 2];
			k = k - 2;
			switch (op)
			{
			case '+':x3 = x1 + x2; break;
			case '*':x3 = x1*x2; break;
			default:break;
			}
			opnd[k] = x3;
			k++;
			printf("(%c,%d,%d,%d)\n", op, x2, x1, x3);
		}
		else { j--; get(); }
	}
	system("pause");
}
