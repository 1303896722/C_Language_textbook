#include <stdio.h>
void main(void)
{
	int x,y,t;
	printf("����������������\n");
	scanf("%d%d",&x,&y);
	t=x;
	x=y;
	y=t;
	printf("%d %d\n",x,y);
}