#include <stdio.h>
int main (void)
{
	int a[5],i,j=0,X;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	scanf("%d",&X);
	for(i=0;i<5;i++)
		if(a[i]!=X)			//�ص㣡�������� 
			a[j++]=a[i];
	if(i==j)
		{
		 printf("δ�ҵ�Ӧɾ��������"); 
		 exit(1);
		}
	for(i=0;i<j;i++)
		printf("%d ",a[i]);
	printf("\n"); 
	
}