#include <stdio.h>
int evensum(int n)
{
	int i,sum=0;
	for(i=2;i<=n;i+=2)
		sum+=i;
	return sum;
}

int oddsum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i+=2)
		sum+=i;
	return sum;
}
int main(void)
{
	int n,sum,flag;
	int (*p)(int);
	printf("������n��\n");
	scanf("%d",&n);
	printf("��n֮ǰ����������0,��n֮ǰż������������\n");
	scanf("%d",&flag);
	if(flag)//���Ϊ���� 
		p=evensum;
	else
		p=oddsum;
	sum=(*p)(n);
	printf("sum=%d\n",sum); 
	return 0;
}

