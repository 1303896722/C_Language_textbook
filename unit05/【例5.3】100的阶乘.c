#include <stdio.h>
#define N 100
int main(int argc, char *argv[])
{
	int i=1;
	double fac=1;
	while(i<=N)
	{
		fac*=i;
		i++;
	}
	printf("%g\n",fac);	
	return 0;
}
/*��һ��ѭ����fac=1��i=2��
  �ڶ���ѭ����fac=1*2��i=3��
  ������ѭ����fac=1*2*3��i=4��
  .........
  ��100��ѭ����fac=1*2*3*...*100��i=101��ֹͣѭ��*/   