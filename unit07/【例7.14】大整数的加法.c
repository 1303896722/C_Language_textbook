#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[201],b[201];
	int c[201];
	int i,j,k;
	int m,n,t=0;
	printf("������������������\n");
	scanf("%s",a);//1.���������ִ��뵽���������� 
	scanf("%s",b);
	m=strlen(a);//2.�ҳ����λ 
	n=strlen(b);
	k=m>n?m:n;	
	for(i=0;i<k;i++)//3.�Ҷ��� 
		a[k-i]=a[m-i-1];
	for(i=0;i<k;i++)
		b[k-i]=b[n-i-1]; 
	for(i=0;i<=k-m;i++)//4.��λ���� 
		a[i]='0';
	for(i=0;i<=k-n;i++)
		b[i]='0'; 
	for(i=k;i>=0;i--)//5����Ӧλ��ӣ��ͳ������ 
	{
		c[i]=((a[i]-'0')+(b[i]-'0'))%10+t;
		t=((a[i]-'0')+(b[i]-'0'))/10;	
	} 
	printf("��Ϊ��\n");
	for(i=01;i<k+1;i++)
		if(c[i])
			printf("%d",c[i]); 
	printf("\n");		
	
}