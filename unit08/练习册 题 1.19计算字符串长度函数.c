#include <stdio.h>
#include <string.h>
int fun(char *s)
{
	char *p=s;
	while(*p++);
	return p-s-1;
} 
int main (void)
{
	char a[80];
	gets(a);
	printf("�ַ�������Ϊ%d %d",fun(a),strlen(a));	
}