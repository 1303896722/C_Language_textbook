#include <stdio.h>
union s
{
	int a;
	double b;
};
int main(void)
{
	union s aa[10];
	int flag,i;
	printf("����1����5���ƣ�����2����ٷ���:");
	scanf("%d",&flag);
	printf("���������ݣ�"); 
	if(flag==1)
	{
		for(i=0;i<10;i++)
			scanf("%d",&aa[i].a);
	}
	if(flag==2)
	{
		for(i=0;i<10;i++)
			scanf("%lf",&aa[i].b);
	}
	if(flag==1)
	{
		for(i=0;i<10;i++)
			printf("%d ",aa[i].a);
	}
	if(flag==2)
	{
		for(i=0;i<10;i++)
			printf("%lf ",aa[i].b);
	}		
	
}