#include <stdio.h>
int main (void)
{
	int b[10]={100,200,300,400,500,600,700,800,900,1000};
	int *pi=b;
	float s[8],*pf=s;
	printf("sizeof(int)=%d\n",sizeof(int)); //���int������ռ�ֽ��� 
	printf("sizeof(float)=%d\n\n",sizeof(float));//���float������ռ���� 

	printf("pi=%X,pi+1=%X\n",pi,pi+1);//int����ָ��������ֽ���Ϊ4 
	printf("pf=%X,pf+1=%X\n\n",pf,pf+1);//int����ָ��������ֽ���Ϊ4
	
	printf("pi[2]=%d\tpi[4]=%d\n",pi[2],pi[4]);//��ʾĳ��Ԫ�صķ��� 
	printf("b[2]=%d\tb[4]=%d\n",b[2],b[4]);
	printf("*(pi+2)=%d\t*(pi+4)=%d\n",*(pi+2),*(pi+4));
	printf("*(b+2)=%d\t*(b+4)=%d\n\n",*(b+2),*(b+4));
	
	printf("&pi[2]=%X\t&pi[4]=%X\n",&pi[2],&pi[4]);//��ʾĳ��Ԫ�ض�Ӧ��ַ�ķ��� 
	printf("&b[2]=%X\t&b[4]=%X\n",&b[2],&b[4]);
	printf("pi+2=%X\tpi+4=%X\n",pi+2,pi+4);
	printf("b+2=%X\tb+4=%X\n\n",b+2,b+4);  

	printf("����1:b[i]=pi[i]��ʾ�������±�Ϊi��Ԫ��\n");
	printf("����2:b=piΪ�����׵�ַ��b+i=pi+i��ʾ�±�ΪiԪ�صĵ�ַ\n");
	printf("����3:*(b+i)=*(pi+i)=b[i]=pi[i]��ʾ�������±�Ϊi��Ԫ��\n");
	printf("����4:b+i=pi+i=&b[i]=&pi[i]��ʾ�±�ΪiԪ�صĵ�ַ\n");
	return 0; 
}