#include <stdio.h>
int f(int n)
{
	int s;
	if(n==1||n==2)
		return 1;
	s=f(n-1)+f(n-2);
	return s;
}
int main(void)
{
	int n;
	printf("������������\n");
	scanf("%d",&n);
	printf("쳲���������%d��Ϊ%d\n",n,f(n)); 
	return 0;
}