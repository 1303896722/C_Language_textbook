#include <stdio.h>
int main(int argc, char *argv[])
{
	double a,c;
	char b;
	int k; 
	printf("������Ҫ����ı��ʽ(����a-b)��\n");
	k=scanf("%lf %c %lf",&a,&b,&c); 
	if(k==0)
		{printf("������������");exit(1);}	
	if(b=='+')
		printf("���Ϊ��%g\n",a+c);
	else if(b=='-')
		printf("���Ϊ��%g\n",a-c); 
	else if(b=='*')
		printf("���Ϊ��%g\n",a*c);
	else if(b=='/')
		printf("���Ϊ��%g\n",a/c);
	else
		printf("������������");		
	 	
	return 0;
}