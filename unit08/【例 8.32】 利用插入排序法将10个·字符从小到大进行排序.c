#include <stdio.h>
void insert(char a[])
{
	int i,j,t;
	for(i=1;i<10;i++)
	{
		t=a[i];//��ǰ��Ҫ�����Ԫ�� 
		for(j=i-1;j>=0&&t<a[j];j--)//j������������һ��Ԫ��
			a[j+1]=a[j];
		a[j+1]=t;
	}
		
}
int main(void)
{
	char a[11];
	int i;
	printf("������10���ַ���\n");
	for(i=0;i<10;i++)
		a[i]=getchar();
	a[i]=0;
	insert(a);
	printf("�������Ϊ��\n");
	puts(a);
}