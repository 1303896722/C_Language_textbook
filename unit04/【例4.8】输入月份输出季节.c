#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	printf("�������·ݣ�");
	scanf("%d",&x);
	if(x>=2&&x<=4)
		printf("�����Ǵ�����\n");
	else if(x>=5&&x<=7)
		printf("�������ļ���\n");
	else if(x>=8&&x<=10)
		printf("�������＾��\n");
	else if(x==11||x==12||x==1)
		printf("�����Ƕ�����\n");
	else
		printf("��������\n"); 
	return 0;
}