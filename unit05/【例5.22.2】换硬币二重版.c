#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	printf("һԪ��50öһ��.����.���Ӳ�ң�һ���������ֿ��ܣ�\n");
	for(i=1;i<=50;i++)
		for(j=1;j<=50;j++)
			{	k=50-i-j;
				if(i+2*j+5*k==100)
				printf("һ��%2dö������%2dö�����%2dö\n",i,j,k);
			}
	return 0;
}