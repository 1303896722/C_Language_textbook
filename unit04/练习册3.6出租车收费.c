#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,money;
	int k;
	printf("�����빫����:");
	k=scanf("%lf",&x);
	if(k==0||x<0){printf("�������\n");exit(1);}
	if(x<3) money=7;
	else if(x<8) money=7+(int)(x-2)*1.73;
	else         money=7+5*1.73+(int)(x-7)*2;
	printf("%g���ﹲ%gԪ\n",x,money); 
	return 0;
}