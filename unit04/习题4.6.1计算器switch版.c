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
	switch(b)
	 	{
			case '+':printf("���Ϊ��%g\n",a+c);break; 
			case '-':printf("���Ϊ��%g\n",a-c);break; 
			case '*':printf("���Ϊ��%g\n",a*c);break; 
			case '/':printf("���Ϊ��%g\n",a/c);break; 
	 	}
	return 0;
}