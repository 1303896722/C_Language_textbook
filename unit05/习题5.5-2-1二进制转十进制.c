#include <stdio.h>
#define N 32
int main(int argc, char *argv[])
{	
	int n,j=1,num=0;
	int f=1; 
	printf("������һ���������ַ���"); 
	scanf("%d",&n);
	while(n!=0)
	{	if(n%10!=0&&n%10!=1)
		{
			f=0;
			break; 
		}
		num+=(n%10)*j; /*˼·����num=��num+n%10*2��i(ѭ������)�η�*/ 
		n=n/10;       /*sum+=pow(2*(n%10),i);����0��0�η�Ϊ1*/
		j*=2;		  /*j=1,j*=2ʵ��2��i�η�*/ 
	} 
	if(f)
		 printf("%d\n",num);
	else
		printf("����Ĳ��Ƕ����ƣ�\n");
	return 0;
}