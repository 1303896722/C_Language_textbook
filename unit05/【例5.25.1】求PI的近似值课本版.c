#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int s=1;
	double n,t=1,PI=0;
	for(n=3.0;fabs(t)>=1e-6;n+=2)/*ע��n�ĳ�ʼֵ�Ͳ���*/ 
	{
		PI+=t;
		s=-s;
		t=s/n;
	}
	PI=4*PI;
	printf("PI=%lf\n",PI);
	return 0;
}