#include <stdio.h>
#define IN 0
#define OUT 1
int main(int argc, char *argv[])
{
	int c,n1,nw,nc,state;
	state=OUT;
	n1=nw=nc=0;	/*n1:����������nw����������nc���ַ���*/ 
	while((c=getchar())!=EOF)
	{
		++nc;				/*�����ַ���*/ 
		if(c=='\n')
		++n1;				/*������뻻�У����һ������*/ 
		if(c==' '||c=='\n'||c=='\t')
		state=OUT;			/*��������ո񣬻س����Ʊ�state�ı�״̬*/
		else if (state==OUT)/*OUT��ʾ���ڵ�����,IN��ʾ�ڵ�����*/ 
		{
			state=IN;		/*������ڵ���״̬�У��ı�״̬��nw+1*/ 
			++nw;
		}
	}	
	printf("%d %d %d\n",n1,nw,nc);
	return 0;
}