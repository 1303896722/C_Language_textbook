#include <stdio.h>
int main(void)
{
	int i;
	int *p;
	printf("������һ��������");//&ȡ��ַ������ȡ��ű������׵�ַ 
	scanf("%d",&i);			//*ȡֵ���������ȡָ����ָ�������ֵ 
	p=&i;
	printf("i=%d\n",i);  //i
	printf("*p=%d\n",*p);//i
	printf("&i=%d\n",&i);//p��i�ĵ�ַ 
	printf("p=%d\n",p); //p��i�ĵ�ַ
	printf("*&p=%d\n",*&p);//p 
	printf("&*p=%d\n",&*p);//p
	printf("*&i=%d\n",*&i);//i
	return 0;
}