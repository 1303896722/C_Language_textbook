#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int m,linenum;
	int i,j;
	printf("������һ��������\n");
	scanf("%d",&m);
	srand((unsigned)time(NULL)); /*srand((unsigned)time(NULL))+*/
	for(i=1;i<=m;i++)		 	
	{
		linenum=rand()%10+1; 	/*linenum=rand()%10+1; ȡ�����*/
		for(j=1;j<=linenum;j++) printf("*");
		printf("\n");
	} 
	return 0;
}