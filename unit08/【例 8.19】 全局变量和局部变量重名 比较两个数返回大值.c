#include <stdio.h>
int a=3,b=5;
int max(int x,int y)
{
	int c;
	c=x>y?x:y;
	return c;
}

int main(void)
{
	int a=8;
	printf("max=%d\n",max(a,b));
}
//ע����ȫ�ֱ����;ֲ�����ͬ��������£��ھֲ������ĺ����У�ȫ�ֱ����������� 