#include <stdio.h>
void hanoi(int n,char x,char y,char z)//n����Ƭ��x����y����z 
{
	if(n==1)
		printf("%c-->%c\n",x,z);
	else 
	{
		hanoi(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		hanoi(n-1,y,x,z);	
	}	
}
int main (void)
{
	int n;
	printf("������A���ϵ���Ƭ������\n");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
}