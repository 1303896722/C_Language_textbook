#include <stdio.h>
#define N 16
int main (void)
{
	int num,a[200]={-45,-8,-4,0,5,7,9,16,25,37,49,55,67,78,87,99};
	int i,j,k;
	printf("������Ҫ�������ĸ�����\n");
	scanf("%d",&num);
	
	printf("������Ҫ�������:\n");
	for(i=0;i<num;i++)//����Ҫ�����������a������� 
		scanf("%d",&a[199-i]);
	 
	for(i=0;i<num;i++) //����Ҫ����������� 
	{
		for(j=0;j<N+i;j++)//�������ź�������� 
		{
			if(a[199-i]<a[j])//Ѱ�Ҳ�������λ�� 
			{
				for(k=N+i;k>j;k--)//�ҵ��󣬽������ 
					a[k]=a[k-1]; 
				a[j]=a[199-i];
				break;
			}		
		}
		if(j==N+i)//��������������� 
				a[N+i]=a[199-i];//����ĩβ 
	} 
	for(i=0;i<N+num;i++)
		printf("%-4d",a[i]);
	printf("\n");
}