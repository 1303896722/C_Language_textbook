#include <stdio.h>
int main(int argc, char *argv[])
{
	long x;
	int k,wan,qian,bai,shi,ge; 
	printf("������һλ������100000����\n");
	k=scanf("%ld",&x);
	if(k==0) 
		{printf("����Ĳ�Ϊ����\n");exit(1);} 
	if(x<0&&x>100000)
		{printf("��������ֳ�����Χ\n");exit(1);}
	wan=x/10000;
	qian=x%10000/1000;
	bai=x%1000/100;
	shi=x%100/10;
	ge=x%10;
	if(wan!=0)
		printf("������Ϊ��λ������λΪ%d,ʮλΪ%d����λΪ%d,ǧλΪ%d����λΪ%d\n",ge,shi,bai,qian,wan);
	else if(qian!=0)
		printf("������Ϊ��λ������λΪ%d,ʮλΪ%d����λΪ%d,ǧλΪ%d\n",ge,shi,bai,qian); 
	else if(bai!=0)
		printf("������Ϊ��λ������λΪ%d,ʮλΪ%d����λΪ%d\n",ge,shi,bai); 
    else if(shi!=0)
		printf("������Ϊ��λ������λΪ%d,ʮλΪ\n%d",ge,shi); 
	else if(ge!=0)
		printf("������Ϊһλ������λΪ%d\n",ge); 
	else
	    printf("������Ϊ��\n");
		return 0;
}