#include <stdio.h>
enum weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
struct date
{
	int year;
	int month;
	int day;
	enum weekday we;
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
void count1()
{
	int ye,da=0,we,i;
	ye=d.year-1980;
	da=ye*365+(ye+3)/4-(ye+3)/100+(ye+3)/400;//��ǰ��ݵ�1980������ 	
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
	da+=d.day-1;//��ǰ���ڵ�1�ŵ�����	
	d.we=(enum weekday)(da+2)%7;
}
void count2()
{
	int ye,da=0,we,i;
	ye=1979-d.year;
	da=ye*365+ye/4-ye/100+ye/400;//��ǰ��ݵ�1980������ 	
	for(i=12;i>=d.month;i--)// ��ǰ�·ݵ�12�µ�����
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
	da=da-d.day+1;//��ǰ���ڵ�1�ŵ�����	
	d.we=(enum weekday)(9-da%7)%7;
}
void output()
{
	printf("%d %02d %02d\n",d.year,d.month,d.day);
	switch (d.we)
	{
		case Monday:printf("1Monday\n");break;
		case Tuesday:printf("2Tuesday\n");break;
		case Wednesday:printf("3Wednesday\n");break;
		case Thursday:printf("4Thursday\n");break;
		case Friday:printf("5Friday\n");break;
		case Saturday:printf("6Saturday\n");break;
		case Sunday:printf("7Sunday\n");break;
	} 	
}
int main(void)
{
	input();
	if(d.year>=1980)
		count1();
	else
		count2();
	output();
}