#include <stdio.h>
#include <ctype.h>/*�ж��ַ�1����*/ 
int main(int argc, char *argv[])
{
	int ch;
	int spaces;/*�ո���*/
	int letters;/*a~z��A~Z*/
	int digite;/*0~9*/
	int puncts;/*���*/
	int others,total;/*�����ַ��������ַ�*/
	spaces=letters=digite=puncts=others=total=0;
	printf("������룺\n");
	while((ch=getchar())!=EOF)
	{	
		total++;
		if(isspace(ch)) spaces++;
		else if(isalpha(ch))letters++;
		else if(isdigit(ch))digite++; 
		else if(ispunct(ch))puncts++;
		else others++; 
	}	
	if(total!=0)
	{
		printf("��������ַ�����%d���ո���\n",spaces);
		printf("��������ַ�����%d����ĸ\n",letters);
		printf("��������ַ�����%d������\n",digite);
		printf("��������ַ�����%d�����\n",puncts);
		printf("��������ַ�����%d�������ַ�\n",others);
		printf("��һ��������%d���ַ�\n",total);
		
	}
	return 0;
}