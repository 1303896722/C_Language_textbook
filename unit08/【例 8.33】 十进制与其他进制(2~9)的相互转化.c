#include <stdio.h>
#include <string.h>
void show()
{
	printf("\n1:ʮ����ת����\n");
	printf("2:����תʮ����\n");
	printf("0:�˳�\n");
	printf("���������ѡ��\n");
}
void ten_to_ote()
{
	int sum,n,i,j,arr[80];
	printf("������10��������:");//���� 
	scanf("%d",&sum);
	printf("��������Ҫת���Ľ���:");
	scanf("%d",&n);
	for(i=0;sum;i++)   //ת�� 
	{
		arr[i]=sum%n;
		sum=sum/n;
	}
	printf("����ת��Ϊ%d���ƽ��Ϊ��",n);
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
	printf("\n");
}
void ote_to_ten()
{
	int n,i,j,sum=0; 
	char arr[80];
	printf("����������Ҫת���Ľ��ƣ�");
	scanf("%d",&n);
	printf("���������ݣ�");
	fflush(stdin); 
	gets(arr);
	for(i=0;arr[i];i++)
	{
		sum=sum*n+arr[i]-'0';
	 	if(arr[i]<'0'||arr[i]>'0'+n)
			{printf("��������\n");exit(1);}
	} 
	printf("��Ӧ10����Ϊ:%d\n",sum); 
} 
int main(void)
{
	int flag=1;
	while(flag!=0)
	{
		show();
		scanf("%d",&flag);
		switch(flag)
		{
			case 1:ten_to_ote();break;
			case 2:ote_to_ten();break; 
			case 0:exit(1);break;
		}
	}
}