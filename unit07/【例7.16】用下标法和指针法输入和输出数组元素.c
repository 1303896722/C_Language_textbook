#include <stdio.h>

int main(void)
{
	int array[6],i=0;
	int *p;
	p=array;
	printf("������6��������\n");
	while(p<(array+6))
		scanf("%d",p++);
	
	printf("����array[i]������飺\n");//1.���������±귨 
	for(i=0;i<6;i++)
		printf("%-4d",array[i]);
	
	printf("\n����*(array+i)������飺\n");//2.��������ָ�뷨
	for(i=0;i<6;i++) 
		printf("%-4d",*(array+i));
	p=array;//��10��p�����仯 
	printf("\n����p[i]������飺\n"); //3.ָ��������±귨
	for(i=0;i<6;i++)
		printf("%-4d",p[i]);
		
	printf("\n����*(p+i)������飺\n");//4.ָ�������ָ�뷨
	for(i=0;i<6;i++)
		printf("%-4d",*(p+i));
		
	printf("\n����*p++������飺\n");//5.ָ�������ָ�뷨��Ч�����
	while(p<(array+6))
		printf("%-4d",*p++); 
		 
	return 0;
}