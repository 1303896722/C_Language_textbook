#include <stdio.h>
#include <string.h>

int main(void)
{
	char p[16];
	char s[4][20];
	int i,len;
	printf("������ʫ�䣺\n");
	for(i=0;i<4;i++)
		scanf("%s",s[i]);
	len=strlen(s[0]);//����'\0'λ�� 
	for(i=0;i<4;i++)
	{
		p[2*i]=s[i][len-2];
		p[2*i+1]=s[i][len-1];//����ռ�����ַ�λ�� 
	}
	p[2*i]='\0';
	printf("ʫ�в��⣺\n");
	puts(p); 
}