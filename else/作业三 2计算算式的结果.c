#include <stdio.h>
int main(void)
{
	int i,n;
	double m=0;
	for(i=1;i<6;i++)
	{
		n=i*i*i+1;
		m=m+1.0/n;
	}
	printf("��ʽ���Ϊ��%lf\n",m);
}