#include <stdio.h>
int main(int argc, char *argv[])
{
	char c;
	printf("������һ���ַ�\n");
	c=getchar();
	if(c<32)
		printf("����һ�������ַ�\n");
	else if(c>='0'&&c<='9')
		printf("����һ������\n");
	else if(c>='A'&&c<='Z')
		printf("����һ����д��ĸ\n");
	else if(c>='a'&&c<='z')
		printf("����һ��Сд��ĸ\n");
	else
		printf("����һ�������ַ�\n"); 
	return 0;
}