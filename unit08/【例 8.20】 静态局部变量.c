#include <stdio.h>
int n=1;
void func()
{
	static int a=2;
	a+=2;
	++n;
	printf("func:n=%d a=%d\n",n,a);
}
int main(void)
{
	static int a;
	printf("main:n=%d a=%d\n",n,a);
	a+=10;
	printf("main:n=%d a=%d\n",n,a);
	printf("main:n=%d a=%d\n",n,a);
	func();
	func();
	func();
}
//��̬�ֲ�������
//1.�ؼ��֣�static
//2.���������̬�洢��
//3.�����ڣ������������
//4.�����򣺶�Ӧ����
//5.1 �ص㣺ֻ���ڱ���ʱ�Żᱻ��ʼ�����ٴε���ʱ���ᱻ��ʼ����
//          ��ֵΪ�ϴ����н���ʱ����ֵ 
//5.2 �ص㣺��δ��ʼ����ϵͳ�Զ����� 