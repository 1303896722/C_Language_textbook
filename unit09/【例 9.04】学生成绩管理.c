#include <stdio.h>
#include <stdlib.h>
#define N 20
struct student
{
	char id[20];
	char name[20];
	int score[3];
	double aver;
};

void Input(struct student st[],int n)//���� 
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("�����%dλͬѧ����Ϣ��\n",i+1);
		printf("����ѧ�ţ�");
		scanf("%s",&st[i].id);
		printf("�������֣�");
		scanf("%s",st[i].name);
		printf("�������ſ�Ŀ�ĳɼ���");
		for(j=0;j<3;j++)
			scanf("%d",&st[i].score[j]); 
	} 
}
void CalAver(struct student st[],int n)//����ƽ���� 
{
	int i;
	for(i=0;i<n;i++)
		st[i].aver=(st[i].score[0]+st[i].score[1]+st[i].score[2])/3.0; 
	
}
void Sore(struct student st[],int n)//���� 
{
	int i,j;
	struct student t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(st[j].aver<st[j+1].aver)
			{
				t=st[j];
				st[j]=st[j+1];
				st[j+1]=t;
					
			}
	}
}
void Output(struct student st[],int n)//��� 
{
	int i;
	printf("\nѧ��\t����\t��Ŀһ\t��Ŀ��\t��Ŀ��\tƽ����\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%d\t",st[i].id,st[i].name,st[i].score[0]);
		printf("%d\t%d\t%lf\n",st[i].score[1],st[i].score[2],st[i].aver);
	}
}
int main(void)
{
	int n;
	struct student st[N];
	printf("��Ҫ������ٸ�ѧ���ĳɼ���\n");
	scanf("%d",&n);
	Input(st,n);//���� 
	CalAver(st,n);//ƽ���� 
	Sore(st,n);//���� 
	Output(st,n);//��� 
}