#include <stdio.h>
#define N 10 
int main(int argc, char *argv[])
{
	double x,min;
	int i;
	printf("�������1����\n");
	scanf("%lf",&min);
	for(i=2;i<=N;i++)
	{
		printf("������%d����:\n",i);
		scanf("%lf",&x);
		if(x<min) min=x; 
	}
	printf("��СֵΪ��%g\n",min);
	return 0;
}