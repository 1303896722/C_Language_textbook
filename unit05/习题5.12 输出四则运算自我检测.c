#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (void)
{
	int weishu,num,n=9;
	char ch; 
	int linenume1,linenume2,i;
	int  a[100]={0},b[100]={0};
	printf("�������Ѷȣ�+��-��x��/����");
	scanf("%c",&ch);
	printf("��ѡ��λ����");
	scanf("%d",&weishu);
	printf("��ѡ��������");
	scanf("%d",&num);
	srand((unsigned)time(NULL));
	for(i=1;i<weishu;i++)
		n=n*10+9;
	for(i=0;i<num;i++)
	{
		linenume1=rand()%n+1;
		linenume2=rand()%n+1;		//1.�������������
		if(ch=='+')
		{
			printf("%d+%d=\n",linenume1,linenume2);
			a[i]=linenume1+linenume2;	
		}	
		else if(ch=='-')
		{
			printf("%d-%d=\n",linenume1,linenume2);//2.���������Ѷ������ͬ�������
			a[i]=linenume1-linenume2;				//3.����𰸣�
		}
		else if(ch=='x')
		{
			printf("%dx%d=\n",linenume1,linenume2);
			a[i]=linenume1*linenume2;
		}					
		else if(ch=='/')	
		{
			printf("%d/%d=\n",linenume1,linenume2);
			a[i]=linenume1/linenume2;
		}								 
	} 
	printf("��������Ĵ𰸣�\n"); 
	for(i=0;i<num;i++)
		scanf("%d",&b[i]);
	for(i=0;i<num;i++)  //4.��������ߵĴ�
	{					//5���Ա���ȷ�𰸣�������Դ�
		if(b[i]==a[i])
			printf("��%d����ȷ����Ĵ�Ϊ%d����ȷ��Ϊ%d\n",i+1,b[i],a[i]);
		else
			printf("��%d�������Ĵ�Ϊ%d����ȷ��Ϊ%d\n",i+1,b[i],a[i]);	
	}									
										 
	return 0;
}
 
