
#include <stdio.h>
int main (void)
{
	int i,j;
	int C[2][3],D[3][2];
	
	//�������C 
	printf("��һ��һ������2x3�ľ���\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&C[i][j]);
	
	//�������C 
	printf("������ľ���Ϊ��\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%-3d",C[i][j]);
		printf("\n");
	}
	
	//����
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			D[j][i]=C[i][j];
			
	//���D 
	printf("\n������ľ���Ϊ��\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%-3d",D[i][j]);
		printf("\n");
	}
	 
}