#include <stdio.h>
int main(int argc, char *argv[])
{
	int m;
	int i;
	int flag=1;
	printf("������һ����������\n");
	scanf("%d",m);
	for(i=2;i<m;i++)		/*�㷨˼�룺��mͬ2~m-1֮������������*/ 
	{	flag=1
		if(m%i==0)			/*������һ��2~m-1����������m��������Ϊ����*/		
		{flag=0;i=m;}		/*������Ϊ����*/ 
	}
	if(flag==0)printf("��������\n"); 
	else printf("������\n");
	return 0;
}