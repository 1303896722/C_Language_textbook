#include <stdio.h>
int main(int argc, char *argv[])
{
	long x;
	int wan,qian,shi,ge;
	printf("������һ����λ��\n");
	scanf("%ld",&x);
	if(x>=10000&&x<100000)
	{
		wan=x/10000;
		qian=x%10000/1000;
		shi=x%100/10;
		ge=x%10;
		if(wan==ge&&qian==shi)
			printf("������ǻ�����\n"); 
		else
			printf("�����ȷ���ǻ�����\n"); 
	}
	else
 		{printf("���벻Ϊ��λ��\n"); exit(1);} 
	return 0;
}
 /*exit()���ܣ������������У����ز���ϵͳ������������״ֵ̬�����ظ�����ϵͳ��
 ������״ֵ̬Ϊ0����ʾ���������˳���Ϊ����ֵ����ʾ��������˳�*/