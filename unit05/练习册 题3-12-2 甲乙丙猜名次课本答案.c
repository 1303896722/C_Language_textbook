#include <stdio.h>
int main (void)
{
	int a,b,c,d;
	for(a=1;a<5;a++)
		for(b=1;b<5;b++)
			{
				if(a==b)
					continue;
				for(c=1;c<5;c++)
				{
					if(c==a||c==b)//a,b,c�ֱ��1�ݼӵ�4��ͬʱ����a,b,c��ͬ���� 
						continue;
					d=10-a-b-c;//b���Բ���ѭ�� 
					if((a==1)!=(b==2)&&(c==1)!=(d==3)&&(d==2)!=(a==3))//�ҳ�������������� 
					printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
				}
		
			}
}