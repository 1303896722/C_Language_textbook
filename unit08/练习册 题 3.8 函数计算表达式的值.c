#include <stdio.h>
double fun(int n)
{
	int i,sum1=1,sum2=0;
	for(i=1;i<=2*n-1;i+=2)
	{
		sum1*=i;
		sum2+=(i+1);
	}
	return 1.0*sum1/sum2;
}
int main(void)
{
	int n;
	printf("������nֵ��\n");
	scanf("%d",&n);
	printf("���ʽ��ֵΪ��%lf",fun(n));
}