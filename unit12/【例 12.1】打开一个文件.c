#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
void main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("������Ҫ���ļ�������·�����ļ�����");
	gets(filename);
	fp=fopen(filename,"r");//���ļ� 
	if(fp==NULL)
	{
		printf("\n���ļ�ʧ�ܣ�%s���ܲ�����\n",filename);
		exit(1);
	} 
	fno=fileno(fp);//ȡ�ùؼ��� 
	fsize=filelength(fno);//����Ĵ�С
	printf("�ļ��򿪳ɹ�,��СΪ��%d",fsize); 
	fclose(fp);
} 