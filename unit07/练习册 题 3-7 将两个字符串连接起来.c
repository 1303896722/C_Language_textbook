#include <stdio.h>
#include <string.h>
int main (void)
{
	char str1[100],str2[100];
	int i,j;
	printf("������һ���ַ�����\n");
	gets(str1);
	printf("��������һ���ַ�����\n");
	gets(str2);
	for(i=strlen(str1),j=0;str2[j];j++)
		str1[i++]=str2[j];
	str1[i]=0;
	puts(str1); 
}