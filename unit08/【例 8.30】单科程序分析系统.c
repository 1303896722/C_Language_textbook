#include <stdio.h>
#include <windows.h>
#define N 100 
int score[N],flag_1,n; 
void show()//��ӡ����
{
	printf("*******************************************\n");
	printf("        1.����ɼ������������룩\n");
	printf("        2.��ƽ��������߷֣���ͷ�\n");
	printf("        3.ͳ�Ƽ����ʺ͸�����������\n");
	printf("        4.����\n");
	printf("        5.���֮ǰ����ѧ������\n");
	printf("        0.�˳�\n");
	printf("*******************************************\n");
	scanf("%d",&flag_1);
} 
void input()//��������
{
	int i;
	printf("��Ҫ������ٸ�ѧ���ɼ���\n");
	scanf("%d",&n);
	printf("������ѧ���ĳɼ���\n");
	for(i=0;i<n;i++)
		scanf("%d",&score[i]); 
	printf("�������\n");
}	
	
void avemaxmin()//��ֵƽ����
{
	int max,min,sum=0,i;
	for(i=1,max=min=score[0];i<n;i++)
	{
		if(max<score[i])
			max=score[i];
		if(min>score[i])
			min=score[i];
		sum+=score[i];
	}
	printf("��߷�:%d,��Сֵ:%d,ƽ����:%g\n",max,min,sum/(double)n);
}
void count()//ͳ�Ʒ�����
{
	int cn[11]={0},i,sum;
	for(i=0;i<n;i++)
	{	if(score[i]==100)
			score[i]--;
		cn[score[i]/10]++;
	}
	printf("�������γɼ����£�\n");
	printf(" 0-9 10-19 20-29 30-39 40-49 50-59 60-69 70-79 80-89 90-100\n");
	for(i=0;i<10;i++)
		printf("  %d   ",cn[i]);
	for(i=0;i<6;i++)
		sum+=cn[i];
	printf("\n������Ϊ��%g\n",sum/(double)n);
	printf("\n");
}	
void sort()//���� 
{
	int i,j,t,a[40];
	for(i=0;i<n;i++)
		a[i]=score[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("�������Ϊ��\n");
	for(i=0;i<n;i++)
		printf("%d  ",score[i]);
} 

void output()
{
	for(i=0;i<n;i++)
		printf("%d  ",score[i]);	
}
int main(void)
{
	while(1)
	{
		show();
		switch(flag_1)
		{
			case 1:input();break;
			case 2:avemaxmin();break;
			case 3:count();break;
			case 4:sort();break;
			case 5:output();break;
			case 0:exit(1);break;
		}
		printf("���������ɽ�����������\n");
		getch();
		system("cls");
	}	
}