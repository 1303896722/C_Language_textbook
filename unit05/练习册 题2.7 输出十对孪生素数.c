/*���������������������2*/
/*˼·�����ж�m˭��Ϊ���������ж�m+2�Ƿ�Ϊ����*/ 
#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,n,k,count=0;
	for(m=2;count<10;m++)
	{
		for(k=2;m%k;k++)
		;
		if(m==k)
		{
			for(k=2;(m+2)%k;k++)
			;
			if((m+2)==k)
			{
				printf("%d\t%d\t\n",m,m+2);
				count++;
			}
		}
	}
	return 0;
}