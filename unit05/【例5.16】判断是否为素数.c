#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,i;
	int flag;
	printf("������һ����������\n");
	scanf("%d",&x);
	flag=1; 
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{flag=0;
		 break;
		}
	}
	if(t) printf("%dΪ����\n",x);
	else  printf("%d��Ϊ����\n",x); 
	return 0;
}