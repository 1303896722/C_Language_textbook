#include <stdio.h>
int main(int argc, char *argv[])
{
	int N,i;
	double sum=0;
	printf("������nֵ:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum+=i;
	}
	printf("ǰN���Ϊ%g\n",sum); 
	return 0;
}