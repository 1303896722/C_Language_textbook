#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[80];
	char s[4];
	int i,num=0;
	printf("�������ַ�����\n");
	gets(str);
	printf("��������Ҫ��ѯ���ַ�����\n");
	gets(s);
	for(i=0;str[i];i++)
		if(str[i]==s[0]&&str[i+1]==s[1])
		{
			num++;
			i++;//��ֹ���������� 
		}
	printf("����%d��\n",num); 
}