#include <stdio.h>
#include <ctype.h> //tolower������ͷ�ļ��� 
int main(void)
{
	int a;
	char b;
	int *aint;
	char *ch;
	printf("������һ��������һ���ַ����ͣ�");
	scanf("%d %c",&a,&b);
	aint=&a;
	ch=&b;
	*aint=*aint+24;
	*ch=tolower(*ch);	//tolower��������ĸ�������ݻ�ΪСд��ĸ�������ַ����䡣 
	printf("�ı�������ֵ��%d\n",*aint);
	printf("�ı����ַ����ͣ�%c\n",*ch); 
	return 0;
}