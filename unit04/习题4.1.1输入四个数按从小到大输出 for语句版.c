#include <stdio.h>
#define N 4
int main(int argc, char *argv[])
{
	int f[N]={0},i,j,t;
	printf("�������ĸ�����\n");
	for(i=0;i<N;i++) scanf("%d",&f[i]);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(f[j]>f[j+1])
			{
				t=f[j];
				f[j]=f[j+1];
				f[j+1]=t;
			}
		}
	}
	printf("��Щ���ݴ�С��������Ϊ��");  	
	for(i=0;i<N;i++) printf("%3d",f[i]);
	printf("\n");     
	return 0;
}