#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,k;
	printf("������һ��ʮ�����Ƶ���");
	k=scanf("%x",&a);
	if(k!=0)
	printf("����ת��ʮ����Ϊ%d\n",a); 
	else
	printf("�������\n");
	return 0;
}