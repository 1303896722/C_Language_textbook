#include <stdio.h>
int main(void)
{
	int i,j,k,n;	//i:������k���м������j�� 
	printf("������һ������");
	scanf("%d",&n);
	k=1;
	for(i=0;i<n;i++)		//�������� 
	{
		for(j=1;j<k;j++)	//j��1�ݼ�ΪK-1 
			printf("%3d",j);
		for(j=0;j<-2*k+n+2;j++)//k�ظ�-2k+n+2�Σ��ⷽ�̣� 
			printf("%3d",k);
		for(j=k-1;j>0;j--)  //j��k-1��Ϊ1 
			printf("%3d",j);
		printf("\n");
		if(k<=n/2)		// k��1�ݼ�Ϊn/2,�ڴ�n/2�ݼ�Ϊ1 
			k++;
		else
			k--;
		if(n%2==0&&i==n/2)//ż��΢�� 
			k--;
	}
	return 0;
}