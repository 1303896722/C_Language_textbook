#include <stdio.h>
int main (void)
{
	int i,j;
	int MA[3][4]={{8,7,5,6},{1,2,3,4},{9,7,6,5}};
	int MB[3][4]={{1,2,3},{4,5},{6}};
	//���MA��
	printf("����MAΪ��\n"); 
	for(i=0;i<3;i++) 
	{
		for(j=0;j<4;j++)	
			printf("%-3d ",MA[i][j]);
		printf("\n");
	}
	
	//���MB
	printf("\n����MBΪ��\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-3d ",MB[i][j]);
		printf("\n");
	} 
	
	//MA=MA-MB
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			MA[i][j]=MA[i][j]-MB[i][j];
	
	//���MA��
	printf("\n����MA-MBΪ��\n"); 
	for(i=0;i<3;i++) 
	{
		for(j=0;j<4;j++)	
			printf("%-3d ",MA[i][j]);
		printf("\n");
	}
	printf("\n");		
	return 0;
}