#include <stdio.h>
int main(void)
{
	int loop,n,sum=0;
	for(loop=1;loop<11;loop++)
	{
		scanf("%d",&n);
		sum+=n;
	}
	printf("%d\n",sum);
	return 0;
}
/*1.ѭ������loop����������ҿ���ѭ������ʱ��ѭ������Ϊ��һ��������������ֵ*/
/*2���ǿsum�ĳ�ʼ��*/
/*3ѭ���е�����*/ 