#include <stdio.h>
int main(int argc, char *argv[])
{
	double i,n,PI=0;
	printf("�����뾫ȷ�����٣�\n");
	scanf("%lf",&n);
	for(i=1;i<=n;i+=4)
	{
		PI+=(1/i-1/(i+2));	
	}
	printf("PI=%lf\n",4*PI);
	return 0;
}
/*ʧ���1.i,nΪdouble��*/
/*ʧ���2.���������ʽΪ%lf*/
/*ʧ���3.ѭ������Ϊ4����ʽ�������ΪPI/4*/ 