#include <stdio.h> 
#define N 5
int main(void)
{
	int i,j,k,m=1,r=1;
	int a[2][N]={0};
	printf("������%d������\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[0][i]);//����洢��a[0]�� 

	for(i=0;i<N;i++)
	{
		if(a[1][i]!=0)//�ѵǼǹ�������Ϊ0
			continue;
		k=i;
			
		for(j=i;j<N;j++)//��δ�Ǽǵ������ҵ���С��
			if(a[1][j]==0&&a[0][j]<a[0][k])
				k=j;
		if(k!=i)
			i--;
				
		a[1][k]=r++;//��¼����
		m++;
			
		for(j=0;j<N;j++)//��¼ͬ����
			if(a[1][j]==0&&a[0][j]==a[0][k])
			{
				a[1][j]=a[1][k];
				m++;
			} 	

			 
	} 

	for(i=0;i<N;i++)
		printf("%-5d",a[0][i]);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%-5d",a[1][i]);
	printf("\n");	
}
/*m��ʾ�Ǽǹ����ĸ���
 ˼·��i��0��Nѭ���������Ǽǹ���������Ѱ��֮��ÿ�ε���Сֵ������������
 		�ټ�¼ͬ���ε���*/ 