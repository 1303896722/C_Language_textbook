#include <stdio.h>
#include <math.h>
struct zuobiao
{
	int x;
	int y;
};
int main(void)
{
	struct zuobiao a,b;
	double l; 
	printf("�������һ��������꣺");
	scanf("%d%d",&a.x,&a.y); 
	printf("������ڶ���������꣺");
	scanf("%d%d",&b.x,&b.y);
	l=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	l=sqrt(l);
	printf("(%d,%d)��(%d,%d)����Ϊ%lf\n",a.x,a.y,b.x,b.y,l);
}