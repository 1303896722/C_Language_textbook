#include <stdio.h>
#include <math.h>
#define N 32
int main(int argc, char *argv[])
{
	char ch;
	int n,j=1,num=0,f=1;
	int i,arr[N]={0},t;
	printf("����Ƕ�����תʮ��������E�������ʮ����ת����������S��");
	scanf("%c",&ch);
	if(ch=='E')   /*������תʮ����*/ 
	{ 
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
	}
	else if(ch=='S')/*ʮ����ת�������� */ 
	{
		printf("������һ��������\n");
		scanf("%d",&n);
		t=n;
		for(i=0;n!=0;i++)
		{
			arr[i]=fabs(n%2); 	  /*����ԭ��*/ 
			n/=2;
		}
		if(t>=0)
		{
			for(j=N-1;j>=0;j--)	 /*���Ϊ�����ԭ��*/ 
			{
				printf("%d",arr[j]);
				if(j%8==0)printf(" ");
			}
		}
		if(t<0)				   /*���Ϊ���������*/ 
		{
			printf("1");      /*�������λΪ1*/ 
			for(j=N-2;j>0;j--)
			{
				if(arr[j]==0)
					printf("1"); /*�м�ȡ��*/ 
				else
					printf("0");
				if(j%8==0)printf(" ");
			}
			printf("%d",arr[0]); /*��һλ����*/ 
		}
		printf("\n");	
		}
	else
		printf("�������"); 
	return 0;
}