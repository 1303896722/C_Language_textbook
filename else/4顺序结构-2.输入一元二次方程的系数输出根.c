#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double a,b,c;
	double x1,x2;
	printf("����������η���ϵ����\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/2*a;
	x1=(-b-sqrt(b*b-4*a*c))/2*a; 
	printf("x1=%g x2=%g\n",x1,x2);
	return 0;
}