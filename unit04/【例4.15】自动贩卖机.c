#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("  ********�Զ���������ѯϵͳ********   \n");
	printf(" ��ѯ�۸���������Ʒǰ���ţ��˳��밴0 \n");
	printf("                1.�̲�\n");
	printf("                2.����\n");
	printf("                3.�Ҵ�\n");
	printf("                4.��Ȫˮ\n");
	printf("                5.���׻�\n");
	printf("                6.����\n");
	printf("                0.�˳�\n");
	printf("��Ҫ��ѯ��\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("�̲�3.5Ԫ/ƿ");break;
		case 2:printf("����3.5Ԫ/ƿ");break;
		case 3:printf("�Ҵ�3.5Ԫ/ƿ");break;
		case 4:printf("��Ȫˮ1/ƿ");break;
		case 5:printf("���׻�5Ԫ/Ͱ");break;
		case 6:printf("����2Ԫ/��");break;
		case 0:printf("ллʹ��");return 0;
		default:printf("�������"); 
	} 
	printf("\n");
	return 0;
}