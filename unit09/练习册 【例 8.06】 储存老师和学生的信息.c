#include <stdio.h>
struct type
{
	char id[20];
	char name[20];
	char job[10];
	union
	{
		int grade;
		char position[20];
	}level;
}person[50];
int main(void)
{
	int n,i;
	printf("����Ҫ������ٸ�ѧ��/��ʦ��Ϣ\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)//���� 
	{
		printf("������ѧ��/���ţ�");
		scanf("%s",person[i].id);
		printf("������������");
		scanf("%s",person[i].name);
		printf("������ְλ(student/teacher)��");
		scanf("%s",person[i].job);
		if(strcmp(person[i].job,"student")==0)
		{
			printf("�������꼶��");
			scanf("%d",&person[i].level.grade); 
		} 
		else if(strcmp(person[i].job,"teacher")==0)
		{
			printf("������ְ�ƣ�");
			scanf("%s",person[i].level.position); 
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("ѧ��\\����\t����\tְλ\t�꼶\\ְ��\n");
		printf("%s\t\t%s\t%s\t",person[i].id,person[i].name,person[i].job);
		if(strcmp(person[i].job,"student")==0)
			printf("%d\n",person[i].level.grade);
		else if(strcmp(person[i].job,"teacher")==0)
			printf("%s\n",person[i].level.position);
		
	} 
	return 0;	
}