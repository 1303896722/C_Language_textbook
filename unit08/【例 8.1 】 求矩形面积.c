#include <stdio.h>
void print_star()//��ӡ*���� 
{
	int i;
	for(i=0;i<56;i++)
		printf("*");
	printf("\n");	
}
double area(double a,double b)
{
	double s;
	s=a*b;
	return s;
} 
int main()
{
	double a,b,s;
	print_star();
	printf("��������εĳ���\n");
	scanf("%lf%lf",&a,&b);
	s=area(a,b);
	printf("���Ϊ��%if\n",s);
	print_star();
	return 0; 
} 