#include <stdio.h>
int fac(int n)
{
	int f;
	if(n==0) 
		return 1;
	f=fac(n-1)*n;
		return f;
}
//�ݹ飺�����еݹ���͵ݹ���� 
int main(void)
{
	int n;
	printf("������һ������\n");
	scanf("%d",&n);
	printf("n!=%d\n",fac(n));
}