#include <stdio.h>
#define M 10
int main(void)
{
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	int num,i;
	printf("������һ�����֣�\n");
	scanf("%d",&num);
	for(i=0;i<M;i++)
		if(a[i]==num)
		{
			printf("�����������У���%dλ\n",i+1);
			exit(0);
		}
	printf("��������������\n"); 
}