#include<stdio.h>
#define N 5
struct stu
{
	char num[20];
	char name[20];
	char sex[5];
}studen[N],a[N];

int main(void)
{
	FILE *fp;
	int i;
	printf("������ð�����ݣ�\n");
	fp=fopen("class_list_2.txt","wt");
	if(fp==NULL)
	{
		printf("�޷����ļ���\n");
		exit(1); 
	}
	for(i=0;i<N;i++)
	{
		printf("������ѧ��:");
		gets(studen[i].num);
		printf("����������:");
		gets(studen[i].name);
		printf("�������Ա�:");
		gets(studen[i].sex);
		fwrite(&studen[i],sizeof(struct stu),1,fp); 
	}
	fclose(fp);
	fp=fopen("class_list_2.txt","rt");
	printf("�ð�����Ϊ��\n");
	printf("����\t����\t�Ա�\n");
	i=0;
	while(!feof(fp))
	{
		fread(&a[i],sizeof(struct stu),1,fp);
		printf("%s\t%s\t%s\n",a[i].num,a[i].name,a[i].sex);
		i++;
	}
	fclose(fp);
	return 0;	
} 