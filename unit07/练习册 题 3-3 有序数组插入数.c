#include <stdio.h>
int main (void)
{
	int a[11]={-12,-3,0,1,3,5,9,54,66,75};
	int i,j,num;
	printf("��������Ҫ��������֣�\n");
	scanf("%d",&num);
	
	for(i=-1;i<10;i++)
		if(num<a[i+1]||(num>a[9]&&i==9))//��λ�������ݵ�λ�� 
		{
			for(j=10;j>i+1;j--)//��λ�ú�����ݺ���һ 
				a[j]=a[j-1];
			a[i+1]=num;//�������� 
			break;
		}
		
	for(i=0;i<11;i++)
		printf("%-5d",a[i]);
	
}