#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,x=0,y=0;
	for(m=1;m<100;m++)
	{   if(m%2==1)x=x+m;
		else y=y+m;
	}					
	printf("������Ϊ%d��ż����Ϊ%d/n",x,y);
	return 0;
}