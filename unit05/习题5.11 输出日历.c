#include<stdio.h>
int main (void)
{
	int year,month,day,loop,blank,enter;    //blank����ÿ����ǰ�Ŀո�enter����ÿ�ܵĻس� 
	printf("���������(2001�굽2010��)��");
	scanf("%d",&year);
	switch(year)
	{
		case 2001: enter=1;break;
		case 2002: enter=2;break;
		case 2003: enter=3;break;
		case 2004: enter=4;break;
		case 2005: enter=6;break;		//1.�������ѡ��һ��ǰ�Ŀո��� 
		case 2006: enter=0;break;
		case 2007: enter=1;break;
		case 2008: enter=2;break;
		case 2009: enter=4;break;
		case 2010: enter=5;break;
		default:printf("�������");exit(1);	
	} 
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
		printf("        %2d��\n",month);	//4��ӡ��ͷ 
		printf("�� һ �� �� �� �� ��\n");
		enter%=7;					//5.ÿ��bleak���������ȷ�� 
		for(blank=0;blank<enter;blank++) //6.����ո� 
			printf("   "); 
		for(loop=1;loop<=day;loop++)//7.������� 
		{
			printf("%-3d",loop);
			enter++;
			if(enter%7==0)			//8.���ƻس� 
				printf("\n");
		} 
		printf("\n\n\n");
	 } 
}