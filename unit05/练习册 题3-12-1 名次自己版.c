#include <stdio.h>
int main (void)
{
	int a,b,c,d;     
	for(a=1;a<5;a++)
		for(b=1;b<5;b++)
			for(c=1;c<5;c++)
				for(d=1;d<5;d++)//a.b.c.d��1��4ѭ������ 
					if((a==1)!=(b==2))
						if((c==1)!=(d==3))
							if((d==2)!=(a==3))//������ұ�������һ��²���ȷ����� 
								if(a!=b&&a!=c&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)//�޳������ظ� 
								printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	return 0;
}