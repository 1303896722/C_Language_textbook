#include <stdio.h>
#define PI 3.1415926

double c,area;

void f(double r)
{
	c=2*PI*r;
	area=PI*r*r;
}

int main(void)
{
	double r;
	printf("������԰�İ뾶��\n");
	scanf("%lf",&r);
	f(r);
	printf("�ܳ�Ϊ��%lf�����Ϊ��%lf\n",c,area);
	return 0;
}