#include <stdio.h>
int f(int x)
{
	return 3*x*x+5*x-7;
}
int main(void)
{
	int (*p)();//����pΪָ������ָ���ͱ���
	int a;
	p=f;//��ֵ 
	printf("Input x=\n");
	scanf("%d",&a);
	printf("(*p)(x)=%d\n",(*p)(a));//ʹ��ָ����溯�� 
	printf("(*p)(2x)=%d\n",(*p)(2*a));
}