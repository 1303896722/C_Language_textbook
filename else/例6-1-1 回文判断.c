#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j;
	char s[80];
	printf("�����ַ�����\n");
	gets(s);
	i=strlen(s)-1;
	j=0;
	while(j<i)
	{
		if(s[i]!=s[j])
			break;
		i--;
		j++; 
	} 
	if(j>=i)
		printf("�ǻ��ġ�\n");
	else 
		printf("���ǻ��ġ�\n");
}