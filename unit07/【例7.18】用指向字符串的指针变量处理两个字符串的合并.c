#include <stdio.h>
int main (void)
{
	char str1[80],str2[30],*ptr1=str1,*ptr2=str2;
	printf("�������ַ���1��\n");
	gets(str1);
	printf("�������ַ���2��\n");
	gets(str2); 
	printf("str1.....str2\n");
	printf("%s.....%s\n\n",ptr1,ptr2);
	
	while(*ptr1)//ʹprt1ָ���ַ�������� 
		ptr1++; 
	while(*ptr2)
		*ptr1++=*ptr2++;//��ptr2��ָ����ַ����ӵ�ptr1��ͬʱ�ƶ�
	*ptr1='\0'; 
	printf("str1.....str2\n");
	printf("%s.....%s\n",str1,str2); 
	return 0;
}
