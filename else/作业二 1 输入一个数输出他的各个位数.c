#include <stdio.h>

int main(void)
{
	int x;
	printf("������һ������\n");
	scanf("%d",&x);
	while(x)
	{
		printf("%d\n",x%10);
		x/=10;
	}
	 
}