#include <stdio.h>
int main (void)
{
	int a,a1=0,i;
	printf("������һ������\n");
	scanf("%d",&a);
	for(i=2;a%i;i++)//�ж�a�Ƿ�Ϊ���� 
		;
	if(i!=a)
	{
	   printf("�����������������\n");
	 	exit(0); 
	}	
	while(a)//����a 
	{
		a1=a1*10+a%10;
		a=a/10;	
	} 
	
	for(i=2;a1%i;i++)//�ж�a1�Ƿ�Ϊ���� 
		;
	if(i!=a1)
	   printf("������������ǿ�������\n");
	else
		printf("����������ǿ�������\n");	
	return 0; 
} 