#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fb;
	char filname[LEN];
	int fno,fsize;
	char ch;
	printf("������Ҫ���ļ�������·��:");
	gets(filname);
	fb=fopen(filname,"rt");//ֻ���ļ�
	if(fb==NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(1);
	} 
	fno=fileno(fb);
	fsize=filelength(fno);
	printf("�ļ��򿪳ɹ���\n");
	printf("�ļ���СΪ��%d\n",fsize);
	printf("�ļ�����Ϊ��\n");
	while((ch=fgetc(fb))!=EOF)//��� 
		printf("%c",ch);
	fclose(fb);
	printf("\n");
} 