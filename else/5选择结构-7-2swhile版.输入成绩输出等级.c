#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	char y;
	printf("������ɼ�:"); 
	scanf("%d",&x);
	switch(x/10)
	{
		case 10:switch(x%100)
				{
					case   0:  printf("�ȼ�ΪA\n");break;
					default :printf("������0~100������֣�\n");
				}
				break;	 
		case  9:printf("�ȼ�ΪA\n");break;
		case  8:printf("�ȼ�ΪB\n");break;
		case  7:
		case  6:printf("�ȼ�ΪC\n");break;
		case  5:
		case  4:
		case  3:
		case  2:
		case  1:
		case  0:printf("�ȼ�ΪD\n");break;
		default:printf("������0~100������֣�\n"); 
	}
	return 0;
}