#include <stdio.h>
double fun(int x,int n)
{
	double sum;
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	sum=(2*n-1)*x*fun(x,n-1)-(n-1)*fun(x,n-2)/1.0/n;
	return sum;
}
int main(void)
{
	int x,n;
	printf("������x��n��");
	scanf("%d%d",&x,&n);
	printf("%d��%d�����õ¶���ʽֵΪ��%lf\n",x,n,fun(x,n)); 
}