#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int m,i,j=0,k;
	printf("100~150��Χ����������Ϊ��\n");
	for(m=101;m<=150;m+=2)	/*����Ϊ2ԭ��ż���϶���������*/ 
	{	k=sqrt(m);		
		for(i=2;i<=k;i++)
		{	
			if(m%i==0)break;/*��ѭ����2��sprt(m)����ö�٣����Ƿ�Ϊm������*/ 
		}
		if(i>=k+1)			/*������2��sprt(m)������m�����ӣ���i>=k+1*/ 
		{			
			printf("%-4d",m);
			j++;
			if(j%5==0) printf("\n");/*����Ϊ5��Ϊһ�н������*/ 
		}
					
	}
	return 0;
}