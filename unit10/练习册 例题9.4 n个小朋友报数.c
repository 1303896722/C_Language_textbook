#include <stdio.h>
struct boy
{
	int no;
	struct boy *next;
};
struct boy *set(int n)
{
	int i;
	struct boy *pEnd,*pHead=NULL,*pNew;
	for(i=0;i<n;i++)
	{
		pNew=(struct boy*)malloc(sizeof(struct boy));
		pNew->no=i+1;
		if(pHead==NULL)
			pHead=pNew;
		else
			pEnd->next=pNew;
		pEnd=pNew;
	} 
	pEnd->next=pHead;
	return pHead;
}
 int last(struct boy *pHead,int m)
 {
 	int i;
 	struct boy *t=pHead,*q=pHead;
 	while(q->next!=t)
 		q=q->next;//qָ��β�ڵ� 
	while(t!=t->next)
	{
		for(i=1;i<m;i++)
		{
			q=t;   //qΪt��ǰ�ڵ� 
			t=t->next;//t�ƶ�		
		}
		q->next=t->next;//ɾ�� 
		t=t->next; //t�ƶ� 
	}
	return (t->no);
 }
int main(void)
{
	int i,n,m;
	struct boy *pHead;
	printf("������m��n��"); 
	scanf("%d%d",&n,&m);
	pHead=set(n);
	printf("%d\n",last(pHead,m)); 
	
}