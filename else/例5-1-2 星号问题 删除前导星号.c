#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,j=0;
	char s[80];
	gets(s);
	while(s[i]=='*')//Ѱ��ǰ��*�ĸ��� 
		i++;
	while(s[i])
		s[j++]=s[i++];//ǰ��
	s[j]=0; 
	puts(s);
	
}