#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,b;
	srand((unsigned)time(NULL));/*���������������*/ 
	a=rand()%5+1;			/*����1��5��Χ�ڵ������*/ 
	printf("��������Ҫ�µ���\n");
	scanf("%d",&b);
	if(a==b)printf("��ϲ��¶���\n");
	else    printf("��Ǹ��´���\n"); 
	return 0;
}