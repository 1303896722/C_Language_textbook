#include <stdio.h>
int main(void)
{
	char ps[5]="Goodhhhhh!",*p=ps;//Խ�� 
	char pt[]="you are a student";
	printf("%s\n",ps);
	for(p=ps;p<ps+10;p++)//Խ�� 
		*p='M';
	printf("%s\n",ps);
	gets(ps);//�������볬��5λ��Խ�� 
	printf("%s\n",ps);
	return 0;
}