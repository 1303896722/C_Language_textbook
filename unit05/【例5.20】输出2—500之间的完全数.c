#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,i,s;
	for(m=2;m<=500;m++)		
	{
		s=0;
		for(i=1;i<=m/2;i++)		/*Ѱ�������ӵķ�ΧΪ1~m/2*/ 
		{
			if(m%i==0)s+=i;		/*�����������ӽ����ۼ�*/ 
		}
		if(m==s)	printf("%d ",m);/*�ж��Ƿ�Ϊ��ȫ��*/ 
		}
	printf("\n");
	return 0;
}