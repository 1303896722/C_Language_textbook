#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char d[20];
	int i;
	printf("����10���ַ���\n");
	for(i=0;i<10;i++)
		scanf("%c",&d[i]);//��������10���ַ�����ĩβ�����Զ���'\0'
	d[i]='\0'; //���һ���ַ����'\0'
	printf("����c������\n"); 
	for(i=0;i<10;i++)
		printf("%c",d[i]);//%c������ 
	printf("\n");
	printf("%s\n",d);//%s�������
	
	printf("����10���ַ���\n"); 
	scanf("%s",d);//ϵͳ���Զ���'\0' 
	printf("����s������\n"); 
	printf("%s\n",d); 
	return 0;
}