#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	short *s;
	double *f=(double *)malloc(sizeof(double));
	printf("ָ��f��ָ����ڴ�ռ���׵�ַ��%X\n",f);
	printf("ָ��f��ָ����ڴ�ռ���ռ���ڴ�Ĵ�С��%d\n",sizeof(*f)); 
	s=(short *)realloc(f,sizeof(s));//???��???????? ??
	printf("ָ��s��ָ����ڴ�ռ���׵�ַ��%X\n",s);
	printf("ָ��s��ָ����ڴ�ռ���ռ���ڴ�Ĵ�С��%d\n",sizeof(*s));
}