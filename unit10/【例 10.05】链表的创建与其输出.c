#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char cName[20];
	int iNumber;
	struct Student *next; //ָ���� 
};
int iCount;

struct Student *Create()
{
	struct Student *pHead=NULL;//��ʼ����ͷ�ͳ��� 
	struct Student *pNew,*pEnd;
	iCount=0;
	pEnd=pNew=(struct Student *)malloc(sizeof(struct Student));//��һ���ڵ� 
	printf("ѧ������Ϊ0ʱ����������\n");
	printf("������������\n");
	scanf("%s",pNew->cName);//pew->cName == (*pew).cName
	printf("������ѧ�ţ�\n");
	scanf("%d",&pNew->iNumber);	
  while(pNew->iNumber!=0)
  {
    iCount++;
	if(iCount==1)//�½ڵ�������ǰ�ڵ��β�� 
		pHead=pNew;
	else
		pEnd->next=pNew;
	pNew->next=NULL;//�½ڵ�ָ����ָ�� 
	pEnd=pNew;//�½ڵ�䵱ǰ�ڵ�β�� 
	
	pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("������������\n");
	scanf("%s",pNew->cName);
	printf("������ѧ�ţ�\n");
	scanf("%d",&pNew->iNumber);
  }
  free(pNew);
  return pHead;	
}

void printf_stu(struct Studet *pHead)
{
	struct Student *pTemp;
	int iIndex=1;
	printf("***********��������%d��ѧ��**********\n",iCount);
	pTemp=pHead;
  while(pTemp!=NULL)
  {
  	printf("��%d��ѧ���ǣ�\n",iIndex);
  	printf("������%s\n",pTemp->cName);
  	printf("ѧ�ţ�%d\n",pTemp->iNumber);
  	pTemp=pTemp->next;
  	iIndex++;
  }
}
int main (void)
{
	struct Student *pHead;
	pHead=Create();//����Ĵ��� 
	printf_stu(pHead);//�������� 
}