#include <stdio.h>
void sort(int b[10],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
}

int main(void)
{
	int a[10],i;
	printf("������10������\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
	printf("�����Ϊ��\n");
	for(i=0;i<10;i++)
	printf("%-5d",a[i]);	
}
//�Ա�����������Ԫ�أ�Ϊ�������βθı� ʵ�β���
//��������Ϊ�������βθı� ʵ�β��� 