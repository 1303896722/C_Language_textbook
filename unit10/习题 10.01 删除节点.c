#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct student
{
	char name[20];//���� 
	char num[20];//ѧ�� 
	char classes[20];//�༶ 
	double score[3];//���� 
	double aver;//ƽ����
	struct student *next;//ָ���� 
}; 
int iCound;
void input_1(struct student *pNew)//����ڵ��ֵ 
{
	fflush(stdin);
	printf("������������");
	gets(pNew->name);
	printf("������ѧ�ţ�");
	gets(pNew->num);
	printf("������༶��");
	gets(pNew->classes);
	printf("���������ſεĳɼ���");	
	scanf("%lf%lf%lf",&pNew->score[0],&pNew->score[1],&pNew->score[2]);
	pNew->aver=(pNew->score[0]+pNew->score[1]+pNew->score[2])/3.0;	
	printf("\n");
}
struct student *input()//�������� 
{
	struct student *pHead=NULL,*pEnd,*pNew;
	iCound=0;
	pEnd=pHead=(struct student *)malloc(sizeof(struct student));
	pNew=(struct student *)malloc(sizeof(struct student));
	printf("��������#ʱ��ֹͣ����\n");
	input_1(pNew);
	while(pNew->name[0]!='#')
	{
		iCound++;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		pNew=(struct student *)malloc(sizeof(struct student)); 
		input_1(pNew);
	}
	free(pNew);
	return pHead; 	
}
void output(struct student *pHead)//��� 
{
	int i=0;
	pHead=pHead->next;
	printf("������һ����%d��ѧ��\n",iCound);
	printf("���/����\t����\tѧ��\t�༶\t��Ŀһ\t��Ŀ��\t��Ŀ��\tƽ����\n");
	while(pHead!=NULL)
	{
		printf("No.%d\t\t",++i);
		printf("%s\t%s\t%s\t",pHead->name,pHead->num,pHead->classes);
		printf("%.1lf\t%.1lf\t%.1lf\t",pHead->score[0],pHead->score[1],pHead->score[2]);
		printf("%.1lf\n",pHead->aver);
		pHead=pHead->next;
	}
}
void strike_out(struct student *pHead)//ɾ��
{
	char a[20];
	struct student *pHead_1=pHead;
	printf("����������ɾ��ѧ����ѧ��\n");
	scanf("%s",a);
	while(pHead&&strcmp(pHead->num,a))
	{
		pHead_1=pHead;
		pHead=pHead->next;
	}	
	if(pHead==NULL)
		printf("���޴��ˣ�\n");
	else
	{
		pHead_1->next=pHead->next;
		free(pHead);
		iCound--;
		printf("��ɾ����\n");
	}

}
int main(void)
{
	struct student *pHead;
	pHead=input();
	output(pHead);
	strike_out(pHead);
	output(pHead);
}