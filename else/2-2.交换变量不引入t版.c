#include <stdio.h>
void main(void)
{
	int x,y,t;
	printf("����������������\n");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d %d\n",x,y);
}