#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *array=NULL,max; 
	int i,num,j;
	printf("��Ҫ���뼸λͬѧ�ĳɼ���");
	scanf("%d",&num);
		
	array=(double*)malloc(sizeof(double)*num);//�����ڴ�
	if(array==NULL)//������ʧ�� 
	{
		printf("��������\n");
		exit(0);	
	}	
	
	printf("������%dλͬѧ�ĳɼ���\n",num);//�ɼ����� 
	for(i=0;i<num;i++)
		scanf("%lf",&array[i]);
	
	max=array[0];//Ѱ�����ֵ 
	j=0;
	for(i=1;i<num;i++)
		if(max<array[i])
		{
			max=array[i];
			j=i;	
		}
		
	printf("�ɼ���ߵ���%dλͬѧ��Ϊ%g��\n",j+1,max);//������
	
	free(array);//�ͷ��ڴ� 
	return 0;
}
//��̬���� ���룺����malloc����
//�ͷţ�free() 