#include <stdio.h>
int main(int argc, char *argv[])
{
	double sum=0,n=1;
	int i,j;
	for(i=1;i<=100;i++)
	{
		n=1;				/*����ѭ������������ĳ�ʼ���ںδ�*/ 
		for(j=1;j<=i;j++) n*=j;	
		sum+=n;
	}
	printf("1~100�Ľ׳˺�Ϊ%g\n",sum);
	return 0;
}