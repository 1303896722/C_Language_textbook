#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	char ch,str[20];
	fp=fopen("class_list.txt","at+");
	if(fp==NULL)
	{
		printf("���ܴ��ļ���\n");
		exit(1);
	}
	printf("������һ���ַ�����\n");
	gets(str);
	fwrite(str,strlen(str),1,fp);
	rewind(fp);//���ùر��ļ�
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	} 
	printf("\n");
	fclose(fp);
} 