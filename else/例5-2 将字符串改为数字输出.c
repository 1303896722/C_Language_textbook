#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[10];
	int i=0,n=0,j=1;
	printf("������һ������:\n");
	gets(s);
	if(s[i]=='-')//�ж����� 
	{
		i++;
		j=-j;
	} 
	while(s[i])//�ַ�ת���� 
	{
		n=n*10+s[i]-'0';
		i++;	
	}
	printf("%d\n",n*j);
}