#include <string.h>
#include <stdio.h>

int main (void)
{
	char s[100];
	int i;
	printf("������һ����ĸ��\n");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<'z')
			s[i]++;
		else if (s[i]=='z')
			s[i]='a'; 
	}
	puts(s);
}