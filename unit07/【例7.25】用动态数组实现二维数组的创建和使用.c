#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1,n2;
	int **array,i,j;
	printf("������һά(����)���ȣ�\n");
	scanf("%d",&n1);
	printf("�������ά(����)���ȣ�\n"); 
	scanf("%d",&n2);
	/*��ѭ����㵽��㣬��������ԭ��*/
	
	array=(int**)malloc(n1*sizeof(int));//������� 
	if(array == NULL)
	{
		printf("����ʧ�ܣ�\n");
		exit(0);
	} 
	for(i=0;i<n1;i++)//�����ڲ� 
	{
		array[i]=(int*)malloc(n2*sizeof(int));
		if(array[i]==NULL)
		{
			printf("����ʧ�ܣ�\n");
			exit(0); 
		}
	}
	
	printf("�������뱣��ľ���\n");
	
	for(i=0;i<n1;i++)//���� 
		for(j=0;j<n2;j++)
			scanf("%d",&array[i][j]);
 	puts("");
	
	for(i=0;i<n2;i++)//��� 
	{
		for(j=0;j<n2;j++)
			printf("%-5d",array[i][j]);
		printf("\n");
	}
	
	for(i=0;i<n1;i++)
		free(array[i]);//�ͷŶ�ά��ռ�ڴ�
	free(array);//�ͷ�һά��ռ�ڴ� 
	return 0;
}