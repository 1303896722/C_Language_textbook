#include <stdio.h>
int main(int argc, char *argv[])
{
	int chengji,k;
	char dengji;
	printf("������ɼ�");
	k=scanf("%d",&chengji);
	if(k==0||dengji<0||chengji>100)
		{printf("��������\n");exit(1);}
	dengji=chengji>=90?'A':chengji>=70?'B':chengji>=60?'C':'D';
	printf("�ȼ�Ϊ=%c",dengji); 
	return 0;
}