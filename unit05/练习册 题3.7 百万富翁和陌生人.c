#include <stdio.h>
int main (void)
{
	int i,j;
	double x=1,sum=0;
	for(i=0;i<30;i++)
	{	
		sum+=x;	
		x*=2; 	
	} 
	printf("���̸�İ����%lf��Ԫ,İ���˸�����%d��Ԫ\n",sum/1000000,30*10);
}