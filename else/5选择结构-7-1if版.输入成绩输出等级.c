#include <stdio.h>
main(void)
{
    int a,k;
  	printf("������ѧ��������\n");
  	k=scanf("%d",&a);
  	if(k==0)
    {printf("������Ĳ�Ϊ����\n");exit(1);}
	if(a>100)
		printf("�������������\n");
	else if(a>=90) 
        printf("��ͬѧ�����ȼ�ΪA\n");
	else if(a>=79)
        printf("��ͬѧ�����ȼ�ΪB\n");
	else if(a>=59)
 		printf("��ͬѧ�����ȼ�ΪC\n");
 	else if(a>=0)
  		printf("��ͬѧ�����ȼ�ΪD\n");
	else
		printf("�������������\n");	
	return 0;
}