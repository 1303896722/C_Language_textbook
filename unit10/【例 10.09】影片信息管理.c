#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
typedef struct Movie
{
	int id;
	char name[20];
	char director[10];
	char actor[20];
	char date[10];
	double score;
	struct Movie *next;	
}Eilm;

void show()
{
	printf("         -----------------------------------------------------------\n");
	printf("         !                    ѧ����Ϣ����ϵͳ                     !\n");
	printf("         -----------------------------------------------------------\n");
	printf("         !                    1-¼��ӰƬ��Ϣ                       !\n");
	printf("         !                    2-��ѯӰƬ��Ϣ                       !\n");
	printf("         !                    3-�޸�ӰƬ��Ϣ                       !\n");
	printf("         !                    4-ɾ��ӰƬ��Ϣ                       !\n");
	printf("         !                    5-��ʾ����ӰƬ                       !\n");
	printf("         !                    6-ӰƬ����                           !\n");
	printf("         !                    7-�˳�                               !\n"); 
	printf("         -----------------------------------------------------------\n");
	
} 
int iCound;
void input_1(struct Movie *pNew)//����ڵ��ֵ 
{
	fflush(stdin);
	printf("������ӰƬ��ţ�");
	scanf("%d",&pNew->id); 
	if(pNew->id==-1)
		return;
	fflush(stdin);
	printf("������ӰƬ���ƣ�");
	gets(pNew->name);
	printf("�����뵼�ݣ�");
	gets(pNew->director);
	printf("���������ݣ�");
	gets(pNew->actor);
	printf("��������ӳ���ڣ�");
	gets(pNew->date);
	printf("������ӰƬ����"); 
	scanf("%lf",&pNew->score); 
	printf("\n");
}
struct Movie *input()//�������� 
{
	struct Movie *pHead=NULL,*pEnd,*pNew;
	iCound=0;
	pEnd=pHead=(struct Movie *)malloc(sizeof(struct Movie));
	pNew=(struct Movie *)malloc(sizeof(struct Movie));
	printf("�������-1ʱ��ֹͣ����\n");
	input_1(pNew);
	while(pNew->id!=-1)
	{
		iCound++;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		pNew=(struct Movie *)malloc(sizeof(struct Movie)); 
		input_1(pNew);
	}
	free(pNew);
	return pHead; 	
}
void inquiry(struct Movie *pHead)//��ѯ 
{
	int a;
	printf("����������Ҫ��ѯӰƬ�ı�ţ�"); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
		pHead=pHead->next;
	if(pHead==NULL)
		printf("δ���ҵ�\n");
	else
	{
		printf("���\t����\t����\t����\t��ӳ����\tӰƬ����\n");
		printf("No.%d\t",pHead->id);
		printf("%s\t%s\t%s\t",pHead->name,pHead->director,pHead->actor); 
		printf("%s\t\t%lf\n",pHead->date,pHead->score); 
		pHead=pHead->next;
	}
}
void chang(struct Movie *pHead)//�޸� 
{
	int a;
	printf("���������޸Ĳ�ѯӰƬ�ı�ţ�"); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
		pHead=pHead->next;
	if(pHead==NULL)
		printf("δ���ҵ�\n");
	else
		input_1(pHead); 
}
void strike_out(struct Movie *pHead)//ɾ�� 
{
	int a;
	struct Movie *pHead_1;
	printf("��������ɾ����ѯӰƬ�ı�ţ�"); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
	{
		pHead_1=pHead;
		pHead=pHead->next;
	}	
	if(pHead==NULL)
		printf("δ���ҵ���\n");
	else
	{
		pHead_1->next=pHead->next;
		free(pHead);
		iCound--;
		printf("��ɾ����\n");
	}
 
}
void output(struct Movie *pHead)//��� 
{
	int i=0;
	pHead=pHead->next;
	printf("���\t����\t����\t����\t��ӳ����\tӰƬ����\n");
	while(pHead!=NULL)
	{
		printf("No.%d\t",pHead->id);
		printf("%s\t%s\t%s\t",pHead->name,pHead->director,pHead->actor); 
		printf("%s\t\t%lf\n",pHead->date,pHead->score); 
		pHead=pHead->next;
	}
}
void length(struct Movie *pHead)
{
	int i=0;
	while(pHead->next)
	{
		i++; 
		pHead=pHead->next;
	}
	printf("%d %d\n",i,iCound);
}
int main(void)
{
	int a;
	struct Movie *pHead;
	while(1)
	{
		system("cls");
		show();
		scanf("%d",&a);
		switch(a)
		{
			case 1:pHead=input();break;//¼��
			case 2:inquiry(pHead);break;//��ѯ 
			case 3:chang(pHead);break;//�޸� 
			case 4:strike_out(pHead);break;//ɾ��
			case 5:output(pHead);break;//��ʾ���� 
			case 6:length(pHead);break;//����ӰƬ���� 
			case 7:exit(0);break;
			default :printf("������������������\n");break; 
		}
		printf("�������������һ������\n");
		Sleep(150);
		getch();
	}
}
  