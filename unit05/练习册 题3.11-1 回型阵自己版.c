#include <stdio.h>
#include <math.h>
int main (void)
{
	int i,j,n,max,t=1,x=1;
	printf ("������һ��������");
		scanf("%d",&n);
	for(i=-(n-1)/2;i<=(n-1)/2;i++)   /*i��-2��2�ݼ�,���x��*/ 
	{
		t=1;
		for(j=-(n-1)/2;j<=(n-1)/2;j++)/*i��-2��2�ݼ�,���y��*/ 
			{
				max=fabs(i)>fabs(j)?fabs(i):fabs(j);/*��i��j�д�ֵ���д���*/ 
				printf("%-3d",-max+(n+1)/2); /*�������Ժ��������������i,j�д�ֵ��ϵ*/ 
				if(n%2==0&&j==0&&t)/*��ż������΢��*/ 
					{
					 j--;
					 t=0;
					 }
			}
			printf("\n");
		if(n%2==0&&i==0&&x)/*��ż������΢��*/
			{
			 i--;
			 x=0;
			}
	}
}