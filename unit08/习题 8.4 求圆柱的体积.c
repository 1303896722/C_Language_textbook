#include <stdio.h>
#define PI 3.145926
double f1(int r,int h)
{
	return PI*r*r*h;
}
int main (void)
{
	int r,R,h;
	printf("�������ԲͲ�İ뾶���⾶����:\n");
	scanf("%d%d%d",&r,&R,&h); 
	printf("���Ϊ��%lf\n",f1(R,h)-f1(r,h));
}