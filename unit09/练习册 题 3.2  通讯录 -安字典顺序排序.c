#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 30
struct address_list
{
	char name[20];
	char telephone[30];	
};
struct address_list addr[N]; 
int n;
void sore()
{
	int i,j;
	struct address_list t;
	for(i=0;i<n;i++)//ð�� 
		for(j=0;j<n-i-1;j++)
			if(strcmp(addr[j].name,addr[j+1].name)==1)
			{
				t=addr[j];
				addr[j]=addr[j+1];
				addr[j+1]=t;
			}			
}
void show()//��ӡ���� 
{
	printf("************************ͨѶ¼*************************\n");
	printf("1.������ϵ��(����������)       2.���������ϵ��\n");
	printf("3.��ѯ��ϵ��                   4.�����µ���ϵ��\n");
	printf("5.ɾ����ϵ��                   0.�˳�\n");
	printf("��������Ӧ������\n"); 
	printf("************************ͨѶ¼*************************\n");
}
void input()//���� 
{
	int i;
	printf("����Ҫ������ٸ���ϵ�ˣ�");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("�������%d����ϵ�˵���Ϣ��\n",i+1);
		printf("������������");
		scanf("%s",addr[i].name);
		printf("������绰��");
		scanf("%s",addr[i].telephone); 
	}
	sore(); 
}
void output()//��� 
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("��%d����ϵ�˵���Ϣ��\n",i+1);
		printf("������%s\n",addr[i].name);
		printf("�绰��%s\n",addr[i].telephone);
	} 
}
void inquiry()//��ѯ 
{
	char str[30];
	int i;
	printf("��������Ҫ��ѯ����ϵ������/�绰��");
	scanf("%s",str);
	for(i=0;i<n;i++)
		if(strcmp(addr[i].name,str)==0||strcmp(addr[i].telephone,str)==0)
			printf("%s�ĵ绰����Ϊ��%s\n",addr[i].name,addr[i].telephone);
} 
void increase()//���� 
{
	int i;
	n++;
	printf("�������¼���ϵ�˵���Ϣ��\n",i+1);
	printf("������������");
	scanf("%s",addr[n-1].name);
	printf("������绰��");
	scanf("%s",addr[n-1].telephone); 
	output();
	sore(); 
	
}
void strike_out()// ɾ�� 
{
	int i,j;
	char str[30];
	printf("��������Ҫɾ����ϵ������/�绰��\n");
	scanf("%s",str);
	for(i=0;i<n;i++)
		if(strcmp(addr[i].name,str)==0||strcmp(addr[i].telephone,str)==0)
		{
			for(j=i;j<n-1;j++)
				addr[j]=addr[j+1];
			n--;
		}
	output();
		
}
int main(void)
{
	int a;
	while(1)
	{
		show();
		scanf("%d",&a);
		switch(a)
		{
			case 1:input();break;//���� 
			case 2:output();break;//��� 
			case 3:inquiry();break;//��ѯ 
			case 4:increase();break;//���� 
			case 5:strike_out();break;//ɾ�� 
			case 0:exit(0);
		}
		getch();
		system("cls"); 
	}
}