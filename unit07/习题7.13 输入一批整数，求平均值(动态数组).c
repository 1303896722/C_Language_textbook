#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *array=NULL,a; 
	int i,num;
	printf("����Ҫ���뼸��������");
	scanf("%d",&num);
		
	array=(double*)malloc(sizeof(double)*num);//�����ڴ�
	if(array==NULL)//������ʧ�� 
	{
		printf("��������\n");
		exit(0);	
	}	
	
	printf("��������Щ����\n");//���� 
	for(i=0;i<num;i++)
		scanf("%lf",&array[i]);
	
	for(i=0;i<num;i++)
		a=a+array[i]; 	
	printf("ƽ����Ϊ��%g \n",a/num);//������
	
	free(array);//�ͷ��ڴ� 
	return 0;
}
//��̬���� ���룺����malloc����
//�ͷţ�free() 