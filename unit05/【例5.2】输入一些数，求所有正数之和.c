#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,sum=0;
	printf("���������ݣ�������0/����ʱ���֮ǰ�ĺ�");
	scanf("%lf",&x);
	while(x>0)
	{
		sum+=x;
		scanf("%lf",&x);
	} 
	printf("%g\n",sum);
	return 0;
}