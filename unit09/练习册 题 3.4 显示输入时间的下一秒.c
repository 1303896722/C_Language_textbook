#include <stdio.h>
struct clocks
{
	int hours;
	int minutes;
	int secomds;
};
void f1(struct clocks *p)//�������޹�ʱ�Ӹ���
{
	p->secomds++;
	if(p->secomds==60)
	{
		p->minutes++;
		p->secomds=0;
	}
	if(p->minutes==60)
	{
		p->hours++;
		p->minutes=0;
	}	
}
int main()
{
	struct clocks t1;
	printf("������ʱ�䣺");
	scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.secomds); 
	f1(&t1);
	printf("��һ��Ϊ��%d:%d:%d\n",t1.hours,t1.minutes,t1.secomds);
}