#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=3,j=10,m,n,p,q;
	m=++i;     /*�ȼ����ã�i=4��m=4*/
	n=i++;     /*�����ڼӣ�n=4��i=5*/
	p=--j;     /*�ȼ����ã�j=9��p=9*/  
	q=j--;     /*�����ڼ���q=9��j=8*/
	printf("i=%d,j=%d,m=%d,n=%d,p=%d,q=%d\n",i,j,m,n,p,q); 
	return 0;
}