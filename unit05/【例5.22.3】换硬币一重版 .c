#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	printf("һԪ��50öһ��.����.���Ӳ�ң�һ���������ֿ��ܣ�\n");
	for(k=1;k<=20;k++)
			{
				i=3*k;
				j=50-4*k;
				if(j<0)continue;
				if(i+2*j+5*k==100)
				printf("һ��%2dö������%2dö�����%2dö\n",i,j,k);
				
			}
	return 0;
}