#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,k=0;
	printf("100��150���ܱ�4����������\n");
	for(i=100;i<=150;i++)
	{
		if(i%4==0) continue;	/*continue���ã������˴�ѭ��*/ 
		printf("%-4d",i);
		k++;
		if(k%8==0)printf("\n");
	}
	printf("\n");
	return 0;
}