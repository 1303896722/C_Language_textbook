#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("%������һ����λ����\n");
	scanf("%d",&a);
	printf("ǧλ=%d\n",a/1000);
	printf("��λ=%d\n",a/100%10);
	printf("ʮλ=%d\n",a/10%10);
	printf("��λ=%d\n",a%10);
	printf("����λ=%d\n",a%1000);
	return 0;
}