#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fp;
	char filename[LEN],date[LEN],temp[LEN];
	int fno,fsize,i;
	char ch;
	printf("������Ҫ���ļ�������·�����ļ�����");
	gets(filename);
	fp=fopen(filename,"a+");
	if(fp==NULL)
	{
		printf("\n���ļ�ʧ��");
		exit(1); 
	} 
	printf("\n�ļ����ݣ�");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s\n",temp);
	printf("\n������Ҫ��ӵ����ݣ�");
	gets(date);
	fputs(date,fp);
	fclose(fp);//����д�Ĳ�����һ��Ҫ���йر� 
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(1);
	}
	printf("\n�ļ����ݣ�");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s\n",temp);
	fclose(fp);
	printf("\n");	
} 