#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	for(i=1;!(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0);i++)/*ע��ѭ��ֹͣ������*/ 
	;
	printf("һ����%d��¥��\n",i);
	return 0;
}