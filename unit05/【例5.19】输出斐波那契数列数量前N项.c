#include <stdio.h>
int main(int argc, char *argv[])
{
	int f1,f2,f,i,N;
	printf("�뿴쳲������������е�һ���һ�\n");
	scanf("%d",&N);
	f1=1;
	f2=1;
	printf("%-10d%-10d",f1,f2);
	for(i=3;i<=N;i++)
	{
		f=f1+f2;			/*˼�룺������������������ֵȡ��������ֵ*/
		printf("%-10d",f); /*���ɾ�ֵ���Ƴ�������ֵ�Ĺ���*/
		f1=f2;
		f2=f;
		if(i%5==0)printf("\n");
	}
	return 0;
}