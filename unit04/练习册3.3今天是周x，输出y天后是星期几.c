#include <stdio.h>
int main(int argc, char *argv[])
{
	int day,sun,x;
	printf("������������ڼ���\n");
	scanf("%d",&day);
	printf("�뿴������������ڼ���\n");
	scanf("%d",&sun);
	x=(day+(sun%7))%7;
	if(x==0)printf("%d�����������\n",sun);
	else     printf("%d���������%d\n",sun,x);
	return 0;
}