#include <stdio.h>
main(void)
{
    int a,k=1;
    char ch;
  	while (k)
  	{
	    printf("������ѧ��������\n");
  		scanf("%d",&a);
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
		printf("��������������ɼ�������Y�������������ַ���\n");
		/*ch=getchar();
		if(ch=='Y')
			k=1;
		else
			k=0;*/
		 
  	}
	return 0;
}