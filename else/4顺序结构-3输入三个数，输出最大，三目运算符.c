#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,y,z,max;
	printf("�������������֣�\n");
	scanf("%lf%lf%lf",&x,&y,&z);
	max=x>y?(x>z?x:z):(y>z?y:z);
	printf("���ֵΪ%g\n",max); 
	return 0;
}