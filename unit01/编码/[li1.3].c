 /*�ó�������������ƽ��ֵ��ͬʱҲ��һ���Զ��庯��ʾ������1*/
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
   a=6.5;b=4.2;c=25.4;
   ave=average(a,b,c);
   printf("average=%f",ave);
   getch();
}
