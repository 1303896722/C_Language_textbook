#include <stdio.h>
int main(int argc, char *argv[])
{
	int age;
	printf("���������䣺\n");
	scanf("%d",&age);
	if(age<22)
		printf("����Ӷ\n");
	else if(age>=22&&age<=30)
		printf("����ҵ��Ա\n");
	else if(age>=31&&age<=45)
		printf("������Ա\n");
	else if(age>=46&&age<=55)
		printf("�ֿ����Ա\n");
	else
		printf("����\n"); 
	return 0;
}