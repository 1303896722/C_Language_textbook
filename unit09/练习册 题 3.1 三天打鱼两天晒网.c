#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
	int we
}d;
void input()
{
	printf("���������(1990��֮��)��");
	scanf("%d",&d.year);
	printf("�������·ݣ�");
	scanf("%d",&d.month);
	printf("���������ڣ�");
	scanf("%d",&d.day); 
}
void count1()
{
	int ye,da=0,we,i;
	ye=d.year-1990;
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
	d.we=da%5;
}
void output()
{
	printf("����������ڣ�");
	if(d.we<3)
		printf("����\n");
	else
		printf("ɹ��\n"); 
}
int main (void)
{
	input();
	count1();
	output();	
}
