#include <stdio.h>
#define N 30 
struct date//���� 
{
	int year;//��
	int month;//��
	int day;//��	
};

struct food
{
	struct date f_date;//������ 
};
struct elsctuical
{
	char unit[30];//���޵�λ 
	char telephone[30];//���޵绰 
};
union kind
{
	struct elsctuical e;//�ҵ� 
	struct food f;//ʳƷ 
};
struct commodity
{
	char number[20];//��Ʒ�� 
	char name[30];//��Ʒ�� 
	struct date indate;//��������
	int prix;//����
	int num ;//���� 
	char a;//����
	union kind k;//�ҵ��ʳƷ��Ϣ 
};

struct commodity comm[N];
int n;

void input()
{
	int i;
	printf("����Ҫ������ٸ���Ʒ����Ϣ\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("�������%d����Ʒ����Ϣ��\n",i+1);
		printf("��������Ʒ��ţ�");
		scanf("%s",comm[i].number); 
		printf("��������Ʒ����");
		scanf("%s",comm[i].name);
		printf("������������ڣ���2017 4 14��:");
		scanf("%d %d %d",&comm[i].indate.year,&comm[i].indate.month,&comm[i].indate.day);
		printf("��������Ʒ���ۣ�");
		scanf("%d",&comm[i].prix);
		printf("��������Ʒ������");
		scanf("%d",&comm[i].num);
		printf("��������Ʒ����(�ҵ�����e,ʳ������f)��");
		fflush(stdin);
		scanf("%c",&comm[i].a);
		if(comm[i].a=='e'||comm[i].a=='E')
		{
			printf("������ҵ�ı��޵�λ��");
			scanf("%s",comm[i].k.e.unit);
			printf("������ҵ�ı��޵绰��");
			scanf("%s",comm[i].k.e.telephone); 
		} 
		else if(comm[i].a=='f'||comm[i].a=='F')
		{
			printf("������ʳ��ı����ڣ�");
			scanf("%d%d%d",&comm[i].k.f.f_date.year,&comm[i].k.f.f_date.month,&comm[i].k.f.f_date.day);	 
		}
	
	printf("\n");	
	}
}
void output()
{

	int i;
	for(i=0;i<n;i++)
	{
		printf("��%d����Ʒ����Ϣ��\n",i+1);
		printf("��Ʒ��ţ�");
		printf("%s\n",comm[i].number); 
		printf("��Ʒ����");
		printf("%s\n",comm[i].name);
		printf("��������:");
		printf("%d %02d %02d\n",comm[i].indate.year,comm[i].indate.month,comm[i].indate.day);
		printf("��Ʒ���ۣ�");
		printf("%d\n",comm[i].prix);
		printf("��Ʒ������");
		printf("%d\n",comm[i].num);
		printf("��Ʒ���ࣺ");
		if(comm[i].a=='e'||comm[i].a=='E')
		{
			printf("�ҵ���\n");
			printf("�ҵ�ı��޵�λ��");
			printf("%s\n",comm[i].k.e.unit);
			printf("�ҵ�ı��޵绰��");
			printf("%s\n",comm[i].k.e.telephone); 
		} 
		else if(comm[i].a=='f'||comm[i].a=='F')
		{
			printf("ʳƷ��\n");
			printf("ʳ��ı����ڣ�");
			printf("%d %02d %02d\n",comm[i].k.f.f_date.year,comm[i].k.f.f_date.month,comm[i].k.f.f_date.day);	 
		}
		printf("\n");	
	}	
}
int main (void)
{
	input();
	output();
}