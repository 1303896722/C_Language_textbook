#include <stdio.h>
#include <stdlib.h>
#define N 5
struct stu
{
	char num[20];
	char name[40];
	char sex[5];
}clas[N],a[N];
int main(void)
{
	FILE *fp;
	int i;
	printf("\�������ѧ������Ϣ��\n");
	fp=fopen("class_list.txt","wt");
	if(fp==NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(1);
	} 
	for(i=0;i<N;i++)
	{
		printf("������ѧ�ţ�");
		gets(clas[i].num);
		printf("������������");
		gets(clas[i].name);
		printf("�������Ա�");
		gets(clas[i].sex);
		fprintf(fp,"%s %s %s\n",clas[i].num,clas[i].name,clas[i].sex);
	}
	fclose(fp);
	fp=fopen("class_list.txt","rt");
	printf("�ð�����Ϊ��\n");
	printf("����\t����\t�Ա�\n");
	i=0;
	while(fscanf(fp,"%s %s %s\n",a[i].num,a[i].name,a[i].sex)!=EOF)
	{
		printf("%s\t%s\t%s\n",a[i].num,a[i].name,a[i].sex);
		i++;
	}
	fclose(fp);
	return 0;	
} 