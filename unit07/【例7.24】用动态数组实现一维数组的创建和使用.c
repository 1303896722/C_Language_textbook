#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main (void)
{
	int *array=NULL,num,i;//NULL--��ָ��
	printf("��Ҫ���뼸�����ݣ�\n");
	scanf("%d",&num);
	array=(int*)malloc(sizeof(int)*num);//���붯̬������ռ���ڴ�ռ� 
	if(array==NULL)//������ʧ�� 
	{
		printf("��������\n");
		exit(0);//��ֹ���� 
	} 
	printf("������%d������\n",num);
	for(i=0;i<num;i++)
		scanf("%d",&array[i]);
		
	printf("��������ǣ�\n");
	for(i=0;i<num;i++)
		printf("%d",array[i]);

	free(array);//�ͷ�������Ŀռ� 
		
	return 0;
}