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
	printf("\n��������%d��ѧ��\n",iCound);
		printf("���\t����\tѧ��\n");
	while(pHead!=NULL)
	{
		printf("%d\t%s\t%d\n",iIndex,pHead->name,pHead->iNumber);
		iIndex++;
		pHead=pHead->next; 
	}
}
void Delete(struct Student *pHead)
{
	struct Student *pt;
	char name[20];
	printf("������Ҫɾ��ѧ����������");
	scanf("%s",name);
	while(pHead->next&&strcmp(pHead->name,name)) 
	{
		pt=pHead;
		pHead=pHead->next;
	}
	if(strcmp(pHead->name,name)!=0)
		printf("���޴���!");
	else
	{
		pt->next=pHead->next;
		free(pHead);
		iCound--;
	}	 
}
int main(void)
{
	struct Student *pHead;
	pHead=Create();//����������;
	print(pHead); 
	fflush(stdout);//ɾ�� 
	Delete(pHead);
	print(pHead); 
}