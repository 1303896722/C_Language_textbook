#include <stdio.h>

int main (void)
{
	int a,i,t,sum=0;
	printf("������a�Ĵ�С:\n");
	scanf("%d",&a);
	for(i=0;i<9;i++)
	{
		sum+=a;
		a=a*10+a%10;
	}
	printf("sum=%d\n",sum);
}