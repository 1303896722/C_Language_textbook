#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char str[6][30];
	int i,j,k,t;
	char p; 
	printf("����6���ַ�����\n");
	scanf("%s%s%s%s%s%s",str[0],str[1],str[2],str[3],str[4],str[5]);
	for(i=0;i<6;i++) 
	{
		for(j=0;j<strlen(str[i]);j++)//ѡ������ 
		{
			t=j;//�洢��Сֵ�±� 
			for(k=j+1;k<strlen(str[i]);k++)
			{
				if(str[i][t]>str[i][k])
					t=k;
			}
			p=str[i][t];//���� 
			str[i][t]=str[i][j];
			str[i][j]=p;
		}
	}
	printf("�����\n"); 
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",str[0],str[1],str[2],str[3],str[4],str[5]);
}