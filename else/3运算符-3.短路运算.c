#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=1,j=1,k;
	k=(--i&&--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	i=0,j=1;
	k=(i--&&--j);
	printf("i=%d j=%d  k=%d\n",i,j,k);
	printf("&&���Ϊ0ʱ�ұ߲��ټ���\n"); 
	/*&&���Ϊ0ʱ�ұ߲��ټ���*/ 
	/*--ǰ���������ã�������������*/ 
	i=0,j=1;
	k=(++i||--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	i=1,j=1;
	k=(i--||--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	printf("||���Ϊ1ʱ�ұ߲��ټ���\n");
	/*||���Ϊ1ʱ�ұ߲��ټ���*/ 
	/*--ǰ���������ã�������������*/ 
	return 0;
}