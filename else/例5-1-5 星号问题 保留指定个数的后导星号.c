#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,n,j=0;
	char s[80];
	printf("�������ַ�����\n");
	gets(s); 
	printf("�����뱣��*�Ÿ�����\n");
	scanf("%d",&n);
	i=strlen(s)-1;
	while(s[i]=='*')//�����*���� 
		i--;
	if(strlen(s)-i>n)//������� 
		s[n+i+1]=0;
	puts(s);
}