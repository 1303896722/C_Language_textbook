#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	int count;	
};

int main(void)
{
	struct person leader[3]={"fu",0,"lu",0,"shou",0},t;
	int i,j,k;
	int n=3,m;
	char name[20];
	printf("������ѡƱ�ĸ�����\n");
	scanf("%d",&m);
	fflush(stdin);
	printf("����������ͶƱ�����\n");
	for(i=1;i<=m;i++)//����ѡƱ��ͳ�ƺ�ѡ�˵�Ʊ�� 
	{
		printf("��%d�ţ�",i);
		gets(name);
		for(j=0;j<3;j++)
			if(strcmp(name,leader[j].name)==0)
				leader[j].count++;
	}
	for(i=0;i<n-1;i++)//ѡ������ 
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(leader[k].count<leader[j].count)
				k=j;
		if(k!=i);
		{
			t=leader[k];
			leader[k]=leader[i];
			leader[i]=t;
		}
	} 
	printf("��Ʊ����£�\n");//��� 
	for(i=0;i<n;i++)
		printf("%s\t%d\n",leader[i].name,leader[i].count);
		
}