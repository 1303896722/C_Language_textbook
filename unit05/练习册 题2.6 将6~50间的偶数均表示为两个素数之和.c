/*��6~50��ż����������ʾ*/
/*˼·����һ��С��m������n�����ж�m-n�Ƿ�Ϊ����*/  
/*�״�㣺12.16�Ŀ����*/ 
#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,n,i,j;
	for(m=6;m<51;m+=2)
	{
		for(n=2;n<m;n++)		
		{
			for(i=2;n%i;i++)			/*11~13�ж�n�Ƿ�Ϊ����*/	
				;
			if(n==i)
			{
				for(j=2;(m-n)%j;j++)	/*15~17�ж�m-n�Ƿ�Ϊ����*/
					;
				if(m-n==j)
				{
				printf("%d=%d+%d\n",m,n,m-n);/*n��m-n��Ϊ��������������������һ��ѭ��*/ 
				break;						/*break���˳��ھ���ѭ��*/	
				}	
			}
		
		}
	}
	return 0;
}
