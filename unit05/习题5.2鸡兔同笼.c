#include <stdio.h>
int main(void)
{
	int x,y,a,b;
	printf("���뼦�ø������ȵĸ�����");
	scanf("%d %d",&a,&b);
	for(x=0;x<=a;x++) 
	{
	 	y=a-x;
		if(2*x+4*y==b)
			printf("��=%d,��=%d\n",x,y);	
	}
	if(x==a+1)
		printf("���������޷����\n"); 
	return 0;
}