#include <stdio.h>
#include <conio.h>
#include <windows.h>
struct clocks
{
	int hours;
	int minutes;
	int secomds;
	int msec;
}; 
struct clocks cl={0,0,0};
int flag=0;
void gotoxy(int x,int y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
} 
void show()//��ӡ���� 
{
	gotoxy(0,0);
	printf("\n��\'s\'��ʼ����\'e\'ֹͣ:\n");
	printf("%02d:%02d:%02d:%02d\n",cl.hours,cl.minutes,cl.secomds,cl.msec);	 
}
void updateWithoutInput()//�������޹�ʱ�Ӹ���
{
	cl.msec++;
	if(cl.msec==100)
	{
		cl.msec=0;
		cl.secomds++;
	}
	if(cl.secomds==60)
	{
		cl.minutes++;
		cl.secomds=0;
	}
	if(cl.minutes==60)
	{
		cl.hours++;
		cl.minutes=0;
	}	
	Sleep(10);
}

void updateWithInput()
{
	char input;
	if(kbhit())
		input=getch();
	if(input=='e'||input=='E')
		flag=0;
	if(input=='S'||input=='s')
		flag=1;
}
int main(void)//�������йصĸ��� 
{
	
	while(1)
	{
		show();//��ӡ���� 
		updateWithInput(); //�������йصĸ��� 
		if(flag)
			updateWithoutInput();//�������޹�ʱ�Ӹ��� 
	
	}
}