#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,j=0,n;
	char s[80];
	printf("�������ַ�����\n");
	gets(s); 
	printf("�����뱣��*�Ÿ�����\n");
	scanf("%d",&n);
	while(s[i]=='*')//ͳ��ǰ��*���� 
		i++;
	if(i>n)
	{
		for(i=i-n;s[i];i++)//ǰ�� 
			s[j++]=s[i];
		s[j]=0;		
	}
	
	puts(s);
}