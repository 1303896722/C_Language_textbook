#include <stdio.h>
int fun(int m,int n)
{
	if(n>m-n)
		n=m-n;
	if(n==0)
		return 1;
	else if(n==1)
		return m;
	return fun(m-1,n-1)+fun(m-1,n);	
}
int main(void)
{
	int m,n;
	printf("������x��n��ֵ��\n");
	scanf("%d%d",&m,&n);
	printf("��%d��ѡ��%d����һ����%d�ֿ�����\n",m,n,fun(m,n));	
}