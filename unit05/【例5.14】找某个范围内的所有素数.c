#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,i,j=1;
	int min,max;
	int flag;
	printf("������һ����Χ:\n");
	scanf("%d %d",&min,&max);
	if(min>max)		
	{
		min=max+min;
		max=min-max;		/*��֤min�е���С��max*/ 
		min=min-max;
	} 
	printf("%d~%d��Χ����������Ϊ��\n",min,max);
	for(m=min;m<=max;m++)	/*��minö�ٵ�max*/ 
	{	flag=1;				/*�����б�֤ÿ����ѭ������flag�������¸�ֵ*/	
		for(i=2;i<m;i++)
		{
			if(m%i==0)		/*��ѭ����2��m-1����ö�٣����Ƿ�Ϊm������*/ 
			{
				flag=0;
				break;
			}
		}
		if(flag)			/*������2��m-1������m�����ӣ���flagδ����ֵΪ0*/ 
		{
			j++;			/*��flagΪ����ֵΪ0�������*/ 
			printf("%-4d",m);
		}
		if(j%11==0) {printf("\n");j++;}/*����Ϊ10��Ϊһ�н������*/ 
	}
	printf("\n");
	return 0;
}