#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,k;
	printf("������һ������\n");
	while(k=scanf("%d",&a)!=EOF)
	{
		if(a%2==0)printf("ż��\n");
		else printf("����\n");
		printf("���Լ�������һ������\n"); 
	}
	return 0;
}