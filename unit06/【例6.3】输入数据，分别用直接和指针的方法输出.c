#include<stdio.h>
int main (void)
{
	int i;
	int *p;
	char ch;
	char *q;
	printf("������һ�����������ַ��ͳ�����");
	scanf("%d,%c",&i,&ch);
	p=&i;
	q=&ch;
	printf("ֱ�����i��%d\n",i);
	printf("ָ�����i��%d\n",*p);
	printf("ֱ�����ch��%c\n",ch);
	printf("ָ�����ch��%c\n",*q);
}