/* ���ַ��󷽳�3x*x*x-5x*x+7x-8=0�ĸ�*/
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double a=-10,b=10,c;
	double f1,f2,f3;
	do{
		c=(a+b)/2;
		f1=3*a*a*a-5*a*a+7*a-8; 
		f2=3*c*c*c-5*c*c+7*c-8;
		f3=3*b*b*b-5*b*b+7*b-8;
		if(f1*f2<0)
			b=c;
		if(f2*f3<0)
			a=c;
	}while(fabs(a-b)>1e-9);/*ע��ѭ����ֹ������������a-c��b-c����Ϊ14,16�еĸ�ֵ*/ 
	printf("%lf\n",c);	
	return 0;
}