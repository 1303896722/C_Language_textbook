#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,x=1,y=0;
	for(i=10;i>1;i--)
	{
	y=(x+1)*2; /*ǰһ�������ĵ��ƹ�ʽ*/ 
	x=y;	   /*��y����x��Ϊ��һ�ε�������׼��*/ 
	}
	printf("һ����%d����\n",y);
	return 0;
}