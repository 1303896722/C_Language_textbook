#include <stdio.h>
#define PI 3.1415926

double a(double r)
{
	return(PI*r*r);
}
int main (void)
{
	double r;
	printf("������Բ�İ뾶��\n");
	scanf("%lf",&r);
	printf("area=%lf\n",a(r));
}