#include <stdio.h>
int main(int argc, char *argv[])
{
	long lirun;
	float b,b1,b2,b4,b6,b10;
	int l;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b4=b2+200000*0.05;
	b6=b4+200000*0.03;
	b10=b6+200000*0.15;
	printf("����������");
	scanf("%ld",&lirun);
	l=lirun/100000;
	if(l>10) l=10;
	switch(l)
	{
		case 0:b=lirun*0.1;break;            /*10������*/ 
 		case 1:b=b1+(lirun-100000)*0.075;break; /*10��~20��*/
		case 2:
 		case 3:b=b2+(lirun-200000)*0.05;break; /*20��~40��*/
		case 4:
		case 5:b=b4+(lirun-400000)*0.03;break;/*40��~60��*/
		case 6:
		case 7:
		case 8:
 		case 9:b=b6+(lirun-600000)*0.015;break;/*60��~100��*/
 		case 10:b=b10+(lirun-1000000)*0.01;break;/*100������*/
	}
	printf("����Ϊ%g",b);
	return 0;
}