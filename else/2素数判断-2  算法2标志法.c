#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,f=1;
	printf("请输入一个整数：");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	} 
	if(f)
		printf("yes\n");
	else 
		printf("no\n"); 
	return 0;
}