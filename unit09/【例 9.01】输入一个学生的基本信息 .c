#include <stdio.h>
#include <stdlib.h>
struct date//����ṹ�� 
{
	int year;//��
	int month;//��
	int day;//��	
};

struct student
{
	char num[9];//ѧ�� 
	char numr[21];//����
	char sex[4];//�Ա�
	int age;//����
	struct date birthday;//��������
	int score[3];//���ſ�Ŀ�ɼ�
	double aver;	
};

int main(void)
{
	struct student stu;//����ṹ�����
	int i,sum=0;
	printf("����������������Ϣ��\n");
	printf("������ѧ��:\n");
	gets(stu.num);
	printf("����������:\n");
	gets(stu.numr);
	printf("�������Ա�:\n");
	gets(stu.sex); 
	printf("����������:\n");
	scanf("%d",&stu.age);
	printf("�������������:\n");
	scanf("%d%d%d",&stu.birthday.year,&stu.birthday.month,&stu.birthday.day);
	printf("���������ſ�Ŀ�ɼ�:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&stu.score[i]);
		sum+=stu.score[i]; 
	}
	stu.aver=sum/3.0;
	
	printf("\n����ѧ������Ϣ����:\n");
	printf("ѧ��:%s\n",stu.num);
	printf("����:%s\n",stu.numr);
	printf("�Ա�:%s\n",stu.sex); 
	printf("����:%d\n",stu.age);
	printf("��������:%d.%d.%d\n",stu.birthday.year,stu.birthday.month,stu.birthday.day);
	printf("���ſ�Ŀ�ɼ�:%d %d %d\n",stu.score[0],stu.score[1],stu.score[2]);
	printf("ƽ����%g\n",stu.aver);	
}