#include <stdio.h>
int main(int argc, char *argv[])
{
	unsigned int x=4294967295;
	printf("�޷�������=%u\n�˽���=%o\nʮ������=%x\nʮ��������%d\n",x,x,x,x);
	printf("%x/n",-1);
	return 0;
}
/*��֪Ϊ�θ����ϴ𰸲�ͬ���²����ͬ������unsigned��ʾ��Χ��ͬ�й�*/
/*��Ȼ���Ҳ¶���*/ 
/*unsigned int 65535!=int -1;��unsigned int 4294967295==int -1*/ 