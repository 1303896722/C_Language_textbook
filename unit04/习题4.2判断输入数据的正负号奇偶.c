#include <stdio.h>
int main(void)
{
	int a;
	printf("������һ������\n");
	scanf("%d",&a);
	if(a>0)
		printf("����  ");
	else if (a==0)
		printf("��  ");
	else
		printf("����  ");
	if(a%2==0)
		printf("ż��\n"); 
	else
		printf("����\n");
	return 0;
}