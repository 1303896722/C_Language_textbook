#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,num=0;
	char s[80];
	printf("������һ���ַ�����\n");
	gets(s);
	for(i=0;s[i];i++)
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]==0))//�ص㣡��ǰ��Ϊ�ո���һ��Ϊ�س����߿ո� 
			num++;
	printf("һ��%d������\n",num);
}