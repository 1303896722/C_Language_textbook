#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main (void)
{
	int *array=NULL,num;
	int i,j,change=1,t;
	printf("��Ҫ�Լ�������������");
	scanf("%d",&num);
	array=(int*)malloc(sizeof(int)*num);//�����ڴ� 
	if(array==NULL)
	{
		printf("��������\n");
		exit(0); 
	} 
	printf("��������Ҫ���������\n");
	for(i=0;i<num;i++)
		scanf("%d",&array[i]); 
	for(i=0;i<num&&change;i++)//ð������ 
	{
		change=0;
		for(j=0;j<num-i-1;j++)
		{
			if(array[j]<array[j+1])
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
				change=1;
			}
		} 
	}
	printf("�������Ϊ��");
	for(i=0;i<num;i++)
		printf("%-5d",array[i]);
	printf("\n");
	free(array);//�ͷ��ڴ� 
	return 0;
}