#include <stdio.h>
int main(void)
{
	int t[10];
	int sum=0,i;
	printf("������10λͬѧ�ĳɼ���");
	for(i=0;i<10;i++)
		scanf("%d",&t[i]);
	for(i=0;i<10;i++) 
		sum+=t[i];
	printf("�ܷ�Ϊ��%d��ƽ����Ϊ��%g\n",sum,sum/10.0);
	return 0;
}