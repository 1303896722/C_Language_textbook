#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,k,m,score[4][2]={0};
	int t,sum[4];
	printf("������4λͬѧ����ѧ�����ĳɼ���\n");
	for(i=0;i<4;i++)
		scanf("%d %d",&score[i][0],&score[i][1]);//����ɼ� 
	for(i=0;i<4;i++)
		sum[i]=score[i][0]+score[i][1];//���
	
	for(i=0;i<4;i++)//ѡ������
	{
		k=i;//k�洢��i����Сֵ�±� 
		for(j=i+1;j<4;j++)
			if(sum[k]<sum[j])//Ѱ����Сֵ 
				k=j;
		if(k!=i)
		{
			for(j=0;j<2;j++)
			{
				m=score[i][j];
				score[i][j]=score[k][j];
				score[k][j]=m;
			}
			t=sum[i];
			sum[i]=sum[k];
			sum[k]=t;
			
		}	
	}
	
	printf("����������£�\n");
	printf("��ѧ\t����\t�ܷ�\t\n");
	for(i=0;i<4;i++)
		printf("%d\t%d\t%d\n",score[i][0],score[i][1],sum[i]);
	return 0; 
}