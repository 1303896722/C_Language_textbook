#include <stdio.h>

int main (void)
{
	int x,num=0,m;
	printf("������һ������\n");
	scanf("%d",&x);
	m=x;
	while(x)
	{
		num+=x%2;
		x/=2;
	}
	printf("%d�Ķ���������%d��1",m,num);
	return 0;
}