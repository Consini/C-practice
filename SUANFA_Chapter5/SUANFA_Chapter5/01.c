#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//1.���ż��飺
//����һ���������ʽ�����ʽֻ�ܺ��� + , -, *, / , (, ), 1, 2, 3, 4, 5, 6, 7, 8, 9, 0�ַ���ÿ�����־�С��10������ʽ������ƥ�������⣬�����������󡣱�д�㷨������ı��ʽ���м��飬�ж�����ƥ���Ƿ���ȷ��
//��ȷ�ģ�                   ����ģ�
//1 + 2 + 4                     (1 + )2
//(1 + 2) + 4                   (1 + 2(4 + 3))
//(1 + 2)                     (1 + 2 + 3 * (4 + 5()))
//1 + 2 + 3 * (4 + 5))
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_node
{
	char data;
	struct s_node *next;
};
typedef struct s_node s_list;
typedef s_list *link;
link stack = NULL;
void print_stack()
{
	link temp = NULL;
	temp = stack;
	if (temp == NULL)
		printf("The stack is empty!!\n");
	else
	{
		while (temp != NULL)//��˼�����temp=NULL��ʱ��Ͳ�ѭ����
		{
			printf("[%d] ", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}
int is_empty()
{
	if (stack == NULL)
		return 1;
	return 0;
}
void push(char value)
{
	link newnode;
	newnode = (link)malloc(sizeof(s_list));
	newnode->data = value;
	newnode->next = stack;
	stack = newnode;
}
int pop()
{
	link top;
	int temp;
	if (stack != NULL)
	{
		top = stack;
		stack = stack->next;
		temp = top->data;
		free(top);
		return temp;
	}
	else
		return -1;
}
int is_op(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		return 1;
	else
		return 0;
}
int is_num(char ch)
{
	if (ch <= '9'&&ch >= '0')
		return 1;
	return 0;
}
void test(char *buf)
{
	int len;
	int i;
	len = strlen(buf);
	for (i = 0; i<len; i++)
	{
		if (buf[i] == '(')
		{
			if (buf[i + 1] == ')')
			{
				printf("��Ч�ı��ʽ\n");
				break;
			}
			else
				push(buf[i]);
		}
		if (is_op(buf[i]))
		{
			if (buf[i + 1] == ')')
			{
				printf("��Ч�ı��ʽ\n");
				break;
			}
		}
		if (is_num(buf[i]))
		{
			if (buf[i + 1] == '(')
			{
				printf("��Ч�ı��ʽ\n");
				break;
			}
		}
		if (buf[i] == ')')
		{
			if (pop() == -1)
			{
				printf("��Ч�ı��ʽ\n");
				break;
			}
		}
	}
	if (is_empty())
	{
		printf("��ȷ�ı��ʽ\n");
	}
	else
		printf("��Ч�ı��ʽ\n");
}
int main()
{
	char buf[100];
	printf("����������ʽ\n");
	scanf("%s", buf);
	test(buf);
	system("pause");
	return 0;
}
#endif