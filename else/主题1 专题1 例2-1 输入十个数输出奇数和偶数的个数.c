#include <stdio.h>
int main(void)
{
	int loop,x,cou0=0,cou1=0;
	for(loop=1;loop<11;loop++)
	{
		scanf("%d",&x);
		if(x%2==0)
			cou0++;
		else
			cou1++;
	}
	printf("ż����%d����������%d��\n",cou0,cou1);
	return 0;
}