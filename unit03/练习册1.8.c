#include <stdio.h>
int main(int argc, char *argv[])
{
	int x=1,y=2;
	printf("%d\n",x,y);        /*���1*/ 
	printf("%d\n",x+y);        /*���3*/ 
	printf("%d %d %d\n",x+y,x+=3,y+=1); /*���37*/ 
	printf("%d\n",x+y,x++,y++); /*���5*/ 
	return 0;
}
/*�Աȿɵõ�printf�а�����ʽʱ�������������*/