#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i;
	printf("������һ��������");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		 break;
		}
	} 
	if(n==i)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}