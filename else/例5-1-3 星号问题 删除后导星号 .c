#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,j=0;
	char s[80];
	gets(s);
	i=strlen(s)-1; 
	while(s[i]=='*')//��*�ĸ��� 
		i--;
	s[i+1]=0;//���������  
	puts(s);
	
}