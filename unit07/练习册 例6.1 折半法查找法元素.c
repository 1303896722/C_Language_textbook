#include <stdio.h>
#define M 10
int main(void)
{
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	int num,low,mid,high;
	low=0;
	high=M-1;
	printf("������һ�����֣�\n");
	scanf("%d",&num);
	if(num<a[0]||num>a[M-1])
	{
		printf("�����ֲ���������\n");
		exit(0);
	}
	while(low<=high)
	{
		mid=(low+high)/2;
		if(num==a[mid])
		{
			printf("�����������У��ڵ�%dλ\n",mid+1);
			exit(0);
		}
		else if(num<a[mid])
			high=mid-1;
		else 
			low=mid+1;
	}
	if(low>=high)
		printf("�����ֲ���������\n");
	return 0;
}