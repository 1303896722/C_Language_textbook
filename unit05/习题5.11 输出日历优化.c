#include<stdio.h>
int year;
int count(int year)//���㵱ǰ���1.1Ϊ���ڼ� 
{
	int ye,day,enter;
	ye=(year-1980);
	day=ye*365+(ye+3)/4-(ye+3)/100+(ye+3)/400;
	enter=(day+2)%7;
	return enter;	
}
void input()
{
	printf("���������(1980��֮ǰ)��"); 
	scanf("%d",&year);
}
void output()
{
	int month,day,loop,blank,enter;    //blank����ÿ����ǰ�Ŀո�enter����ÿ�ܵĻس� 
	enter=count(year); 
	printf("%d���������£�\n",year);
 	for(month=1;month<13;month++)  //2.�����·ݵĵݼ� 
	 {
	 	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) 
	 		day=31;
 		else if(month==4||month==6||month==9||month==11)
 			day=30;
		else if(month==2&&(year==2004||year==2008))//3.�����·�ѡ������ 
			day=29;
		else
			day=28;
		enter=enter%7;            //5.ÿ��bleak���������ȷ�� 
		printf("        %2d��\n",month);	//4��ӡ��ͷ 
		printf("�� һ �� �� �� �� ��\n");							
		for(blank=0;blank<enter;blank++) //6.����ո� 
			printf("   "); 
		for(loop=1;loop<=day;loop++)//7.������� 
		{	enter++;
			printf("%-3d",loop);
			if(enter%7==0)			//8.���ƻس� 
				printf("\n");
		} 
		printf("\n\n\n");
	 } 
}
 
int main (void)
{
	input();
	output();
}