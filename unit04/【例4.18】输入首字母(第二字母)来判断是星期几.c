#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	char a;
	printf("��������������ĸ\n");
	scanf("%c",&a);
	a=toupper(a);   /*Сдת��Ϊ��д��ͷ�ļ�Ϊ��ctype��*/
	switch(a)
	{
		case 'M':printf("����һMonday\n");break;
		case 'W':printf("������Wednesday\n");break;
		case 'F':printf("������Friday\n");break; 
		case 'T':printf("�޷��ж����������u/h\n");
				 if((a=getch())=='u') printf("���ڶ�Tuesday\n");
				 else if((a=getch())=='h') printf("������Thursday\n");
				 else printf("��������\n");break; 
	    case 'S':printf("�޷��ж����������a/u\n");
				 if((a=getch())=='a') printf("������Saturday\n");
				 else if((a=getch())=='u') printf("������Sunturday\n");
				 else printf("��������\n");break; 
        default:printf("��������!\n");break;
	} 
	return 0;
}