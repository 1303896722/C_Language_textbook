#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	printf("������һ����λ�����µ�����");
	scanf("%d",&x); 
	if(x>100000)
		printf("��������\n"); 
	else if(x/10000!=0)
		printf("��λ�������λ��Ϊ%d\n",x%10);
	else if(x/1000!=0)
		printf("��λ�������λ��Ϊ%d\n",x%10);
	else if(x/100!=0)
		printf("��λ�������λ��Ϊ%d\n",x%10);
	else if(x/10!=0)
		printf("��λ�������λ��Ϊ%d\n",x%10);
	else if(x/1!=0)
		printf("һλ�������λ��Ϊ%d\n",x%10);
	return 0;
}