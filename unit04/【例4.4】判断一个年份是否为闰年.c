#include <stdio.h>
int main(int argc, char *argv[])
{
	int k,a,leap=0;
	printf("������һ�����\n");
	while(k=scanf("%d",&a)!=EOF)
	{
		if(a%4==0&&a&100!=0||a%400==0)leap=1 ;
		if(leap)	
			printf("����\n");
		else
			printf("ƽ��\n"); 
	printf("���Լ�������\n"); 
	} 
	
	return 0;
}