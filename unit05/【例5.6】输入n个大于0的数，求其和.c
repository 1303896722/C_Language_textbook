#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,n,x,sum;
	i=1;sum=0;
	printf("������Ҫ������ĸ�����");
	scanf("%d",&n);
	printf("������Ҫ�Ӻ͵�����"); 
	do{
		scanf("%d",&x);
		sum+=x;
		i++;
	} while(i<=n);
	printf("��Щ����Ϊ��%d\n",sum);
	return 0;
}