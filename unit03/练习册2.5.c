#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	x=10;
	printf("%d %d\n",++x,x);/*11,10*/
	x=10;
	printf("%d %d\n",x,++x);/*11,11*/
	x=10;
	printf("%d %d\n",x++,x);/*10,10*/
	x=10;
	printf("%d %d\n",x,x++);/*11,10*/
	return 0;
	/*�Աȿɵõ�printf�а�����ʽʱ�������������*/
}