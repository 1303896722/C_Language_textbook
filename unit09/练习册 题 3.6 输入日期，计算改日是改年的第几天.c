#include <stdio.h>
enum weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
struct date
{
	int year;
	int month;
	int day;
};

struct date d;
void input()
{
	printf("���������(1980��֮��)��");
	scanf("%d",&d.year);
	printf("�������·ݣ�");
	scanf("%d",&d.month);
	printf("���������ڣ�");
	scanf("%d",&d.day); 
}
void count()
{
	int da=0,i;	
	for(i=1;i<d.month;i++)// ��ǰ�·ݵ�һ�µ�����
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) 
	 		da+=31;
 		else if(i==4||i==6||i==9||i==11)
 			da+=30;
		else if(i==2&&(d.year%4==0&&d.year%100!=0||d.year%400==0))
			da+=29;
		else
			da+=28;
	}
	da+=d.day;//��ǰ���ڵ�1�ŵ�����
	printf("%d %02d %02d��%d���%d��\n",d.year,d.month,d.day,d.year,da);	
}

int main(void)
{
	input();
	count();
}