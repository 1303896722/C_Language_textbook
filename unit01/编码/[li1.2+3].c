/*����������ƽ��ֵ*/
#include<stdio.h>
/*���庯��average()*/
float average(float x,float y,float z)
{
   float aver;
   aver=(x+y+z)/3;
   return(aver);
}
void main()
{
   float a,b,c,ave;
   printf("������3����a,b,c:");
   scanf("%f,%f,%f",&a,&b,&c);
   ave=average(a,b,c);
   printf("average=%f",ave);
   getch();
}
