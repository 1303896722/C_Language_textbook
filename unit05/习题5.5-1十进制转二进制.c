#include <stdio.h>
#include <math.h>
#define N 32
int main(int argc, char *argv[])
{
	int i,j,n,arr[N]={0},t;
	printf("������һ��������\n");
	scanf("%d",&n);
	t=n;
	for(i=0;n!=0;i++)
	{
		arr[i]=fabs(n%2); 	  /*����ԭ��*/ 
		n/=2;
	}
	if(t>=0)
	{
		for(j=N-1;j>=0;j--)	 /*���Ϊ�����ԭ��*/ 
		{
			printf("%d",arr[j]);
			if(j%8==0)printf(" ");
		}
	}
	if(t<0)				   /*���Ϊ���������*/ 
	{
		printf("1");      /*�������λΪ1*/ 
		for(j=N-2;j>0;j--)
		{
			if(arr[j]==0)
				printf("1"); /*�м�ȡ��*/ 
			else
				printf("0");
			if(j%8==0)printf(" ");
		}
		printf("%d",arr[0]); /*��һλ����*/ 
	}
	printf("\n");
	return 0;
}