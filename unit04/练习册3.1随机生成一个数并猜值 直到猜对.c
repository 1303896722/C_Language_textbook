#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,b,c=0;
	srand((unsigned)time(NULL));/*���������������*/ 
	a=rand()%10000+5000;			
	printf("��������µ���\n");
	scanf("%d",&b);
	while(b!=a)
	{
	if(b>a)printf("����\n");
	else    printf("��С\n");
	printf("�����������Ҫ�µ���\n");
	scanf("%d",&b); 
	c++;
	}
	printf("��ϲ������%d�β¶���,��Ϊ%d\n",c,a); 
	return 0;
}