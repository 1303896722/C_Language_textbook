#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k,count;
	for(i=1;i<9;i++)
		for(j=0;j<9;j++)
			if(i==j) continue; /*���i=j����ֹ�˴�ѭ����������һѭ��*/ 
			else
				for(k=0;k<9;k++)
					if(k!=i&&k!=j)count++;/*���kͬʱ������i j���Ϊһ��*/ 
	printf("����Ϊ=%d\n",count); 
	return 0;
}