#include <stdio.h>
int main(int argc, char *argv[])
{
	int j=10;
	switch(j)
	{
		case 9:j+=1;
		case 10:j+=2;
		case 11:j+=3;
		default:j+=4;
	}
	printf("j=%d\n",j);
	return 0;
}
/*1,case�������������ͬ��2��case������ԼӶ�����ʽ�������ܼ�{}
  3����case��default˳����Ըı䣬��ǰ����ÿ����䶼����break��䣻
  4��default����ʡ�Բ�д
  5�����û��break��䣬������㳣�����ĺ����Լ����У���break������������switch��� */ 