#include <stdio.h>
int main(void)
{
	char str[5][20];
	char (*p)[20];
	printf("������5���ַ�����\n");
	for(p=str;p<str+5;p++)
		scanf("%s",p);
	printf("��������ǣ�\n");
	for(p=str;p<str+5;p++)
		printf("%s ",p);
	return 0;
}