#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float a,b,c,d;
	int k;
	printf("������һԪ���η��̵�����ϵ��a= b= c=\n");
	k=scanf("%d %d %d",&a,&b,&c);
	if(k==0)
		{printf("�������ݳ���");exit(1);}
	if(a==0){printf("����Ĳ�ΪһԪ���η���\n");exit(1);} 
	d=(b*b-4*a*c);
	if(fabs(d)>1e-6)
		printf("�÷�������������x1=%f,x2=%g\n",(-b+sqrt(b))/(2*a),(-b-sqrt(b))/(2*a));
	else if(fabs(d)<=1e-6)
		printf("�÷�����һ������x1=x2=%g\n",(-b)/(2*a));
	else
		printf("�÷���������������x1=%g,x2=%g\n",(-b)/(2*a),sqrt(-d)/(2*a)); 
	return 0;
}