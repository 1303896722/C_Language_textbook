#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30]="Happy birthday",str2[30]="2014";
	puts(strcat(str1,str2));//strcat:���ַ������ӵ�����Ĵ����棬���������׵�ַ
							//putS:����ַ���
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));//strlen�����ַ������ȣ��������䳤��
													//strcmp�Ƚ������ִ�
	gets(str1);//gets�����������ַ���
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));
	puts(strcpy(str1,str2));//�����ַ����������� 
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));
	
	gets(str1);
	puts(strcat(str1,str2));
	 
}