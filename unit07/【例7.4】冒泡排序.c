#include <stdio.h>
int main(void)
{
	int a[10];
	int i,j,change=1,t;    //change ��־��һ���Ƿ��н��� 
	printf("������10�����֣�");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<10&&change;i++)
	{
		change=0;
		for(j=0;j<10-i-1;j++) //i=nʱ��˵���Խ�����n+1�����򣬺�n+1�������ź��� 
		{					 // ������һ��ֻ��Ҫ��0��10-n+1��Щ��������ڽ��� 
			if(a[j]>a[j+1])   //�������������ǰ��������򽻻� 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				change=1;
			}
		}
	}
	printf("��Щ���ݴ�С��������Ϊ��\n");
	for(i=0;i<10;i++)
		printf("%-5d",a[i]);
	printf("\n");
}