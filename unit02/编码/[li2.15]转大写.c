/*����һ���ַ����������Ƿ�Ϊ��д������ת��Ϊ��д*/
#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	char ch;
	ch=getchar();  /*getchar����һ���ַ�*/ 
	ch=ch>='a'&&ch<='z'?ch-32:ch;
	putchar(ch);   /*putchar���һ���ַ�*/ 
	return 0;
}