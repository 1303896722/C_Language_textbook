#include <stdio.h>
int main(int argc, char *argv[])
{
	double a,c,d;
	char b;
	int k; 
	printf("������Ҫ����ı��ʽ(����a-b)��\n");
	k=scanf("%lf %c %lf",&a,&b,&c); 
	if(k==0||b!='+'&&b!='-'&&b!='*'&&b!='/')
		{printf("������������/n");exit(1);}	
	d=b=='+'?a+c:b=='-'?a-c:b=='*'?a*c:a/c;
	printf("������Ϊ��%g",d);
}