#include <stdio.h>
char *strcat(char *s1,char *s2)
{
	char *p=s1;//p���洫�ݵ��׵�ַ
	while(*s1) s1++;//��sl����\0�� 
	while(*s1++=*s2++);//��s2ֱ�ߵ�ֵ����s1,ֱ��s2ָ��\0 
	return p;
		
}
int main (void)
{
	char s[40]="hello,";
	printf("%s\n",strcat(s,"welocom to you!"));
}