#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
	char name[20];
	int iNumber;
	struct Student *next;
};
int iCound;
struct Student *Create()
{
	struct Student *pHead=NULL,*pNew,*pEnd;
	iCound=0;
	pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("������������ѧ��(ѧ������ʱֹͣ����)��\n");
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCound++;
		if(iCound==1)
			pHead=pNew;
		else
			pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		
		pNew=(struct Student *)malloc(sizeof(struct Student));
		scanf("%s",pNew->name);
		scanf("%d",&pNew->iNumber); 
	} 
	free(pNew);
	return pHead; 
}
void print(struct Student *pHead)
{
	int iIndex=1;
	printf("��������%d��ѧ��\n",iCound);
		printf("���\t����\tѧ��\n");
	while(pHead!=NULL)
	{
		printf("%d\t%s\t%d\n",iIndex,pHead->name,pHead->iNumber);
		iIndex++;
		pHead=pHead->next; 
	}
}
struct Student *Insert1(struct Student *pHead)//���ڵ�һ�ڵ� ����һ 
{
	struct Student  *pNew; 
	printf("�������¼���ѧ����������ѧ�ţ�\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	pNew->next=pHead;//���ӵ�һ�ڵ� 
	pHead=pNew;//��ͷ��ָ��ָ���½ڵ� 

	iCound++;
	return pHead;
}

Insert2(int *p)//���ڵ�һ�ڵ� ������ ����ָ�� 
{
	struct Student  *pNew; 
	printf("�������¼���ѧ����������ѧ�ţ�\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	pNew->next=(struct Student *)*p;//���ӵ�һ�ڵ� 
	*p=pNew;//��ͷ��ָ��ָ���½ڵ� 

	iCound++;
}

void Insert3(struct Student *pHead)//����ָ��ѧ������
{
	struct Student  *pNew; 
	char name[20];
	printf("���������������λѧ�����棺\n");
	scanf("%s",name); 
	
	printf("�������¼���ѧ����������ѧ�ţ�\n");//�½ڵ������ 
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	while(pHead->next&&strcmp(pHead->name,name)) pHead=pHead->next;
	pNew->next=pHead->next;//���� 
	pHead->next=pNew;

	iCound++;
	 
} 
void Insert4(struct Student *pHead)//����β�� 
{
	struct Student  *pNew; 
	printf("�������¼���ѧ����������ѧ�ţ�\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	while(pHead->next!=NULL) pHead=pHead->next;
	pNew->next=pHead->next;
	pHead->next=pNew;//���� 
	iCound++;
} 
int main(void)
{
	struct Student *pHead;
	pHead=Create();//����������;
	print(pHead); 
	//pHead=Insert1(pHead);//���뵽ͷ�����淽��1  
	//Insert2(&pHead);//���뵽ͷ������ ����2 
	Insert3(pHead);//����ָ��ѧ������
	//Insert4(pHead);//����β�� 
	print(pHead); 
}