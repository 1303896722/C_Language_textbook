#include <stdio.h>
struct fushu
{
	int a;
	int b;
};
int main(void)
{
	struct fushu x1,x2,x3;
	printf("������һ��������ʵ�����鲿��");
	scanf("%d%d",&x1.a,&x1.b);
	printf("��������һ��������ʵ�����鲿��");
	scanf("%d%d",&x2.a,&x2.b);
	x3.a=x1.a+x2.a;
	x3.b=x1.b+x2.b;
	printf("%d+%di+%d+%di=%d+%di\n",x1.a,x1.b,x2.a,x2.b,x3.a,x3.b);
}