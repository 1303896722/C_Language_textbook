#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,x,sum=0;
	printf("������һ��������");
	scanf("%d",&n);
	x=n%10;
	while(x!=0)
	{	
		if(x%2==1)
			sum+=x;
		n=n/10; 
		x=n%10;
	}
	printf("�������λ�ϵ�������Ϊ=%d\n",sum); 
	return 0;
}