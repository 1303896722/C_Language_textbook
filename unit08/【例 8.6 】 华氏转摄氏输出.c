#include <stdio.h>
int ftoc(double f)
{
	return (5.0/9.0)*(f-32);
}
int main(void)
{
	double f;
	printf("������һ�������¶�:\n");
	scanf("%lf",&f);
	printf("�����¶�Ϊ��%d\n",ftoc(f));
	return 0;
}
//����ֵͬ�������ͱ���һ�� 