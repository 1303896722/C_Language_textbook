#include <stdio.h>
#include <string.h>

int main(void) 
{
	char k[20],s[3][10];
	int b[3]={0},i,j;
	printf("����3λ��ѡ�˵����֣�\n");
	for(i=0;i<3;i++)
		gets(s[i]);
	printf("������λ��ѡ�˵ĵ�Ʊ�����\n");
	for(i=0;i<6;i++)
	{
		gets(k);
		for(j=0;j<3;j++)
			if(!strcmp(s[j],k))
				b[j]++;
	}
	printf("��Ʊ�������:\n");
	for(i=0;i<3;i++)
		printf("%s:%d ",s[i],b[i]);
	return 0;
}