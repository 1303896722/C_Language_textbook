#include <stdio.h>
void swap(int p1,int p2)
{
	int a;
	a=p1;
	p1=p2;
	p2=a;
}

int main(void)
{
	int m,n;
	printf("��������������\n");
	scanf("%d%d",&m,&n);
	if(m>n)
		swap(&m,&n);
	printf("%d %d\n",m,n);
}
//1.ʹ�ñ���(����Ԫ��)������ָ�����βΣ��βθı䣬ʵ�β��ı�
//2.ʹ��������(*ָ��)���βΣ��βθı䣬ʵ�θı� 