#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fp;
	char filenme[LEN],date[LEN];
	int fno,fsize,i;
	char ch;
	printf("������Ҫ���ļ�������·�����ļ�����");
	gets(filenme);
	fp=fopen(filenme,"a+");//��׷����ʽ���ļ�
	if(fp==NULL) 
	{
		printf("���ļ�ʧ��\n");
		exit(1);
	} 
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("�ļ��Ѵ򿪣���СΪ��%d\n",fsize);
	printf("�ļ�����Ϊ��\n");
	while((ch=fgetc(fp))!=EOF)//�� 
		printf("%c",ch);
	printf("������Ҫ��������ݣ�\n");
	gets(date);
	for(i=0;date[i];i++)//д���ļ��� 
		fputc(date[i],fp);
	fclose(fp);
		
	fp=fopen(filenme,"rt"); //fp���¸�ֵ 
	if(fp==NULL) 
	{
		printf("���ļ�ʧ��\n");
		exit(1);
	} 
	while((ch=fgetc(fp))!=EOF)//�� 
		if(ch!=' ') 
		printf("%c",ch);
	printf("\n");
	fclose(fp);	
	
}
 