#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m,r,a,b,i;
	printf("��������������");
	scanf("%d%d",&a,&b);
	m=a>b?a:b;  
	n=a>b?b:a;
	r=m%n;
	i=0;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
		i++;
	}
	 printf("���Լ��Ϊ��%d,ѭ��%d��\n",n,i);
	return 0;
}
/*�㷨��շת��������������������Լ���������н�С(n)������������
����(r)�����Լ��*/
/*����14��2��m=14,n=2,r=0,�������Լ��=n%0
      24��5.m=24,n=5,r=4,,i=1����ѭ��
	        m=5,n=4,r=1,i=2����ѭ��
			m=4,n=1,r=0 ѭ��ֹͣ�����1*/ 