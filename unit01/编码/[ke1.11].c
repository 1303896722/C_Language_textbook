/*��������Ƿ�Ϊѧ��ȷ���۸�*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int age,b;
  printf("��������:\n");
  scanf("%d",&age);
  if(age<=12)
    printf("10Ԫ");
  else
    if(age>=60)
     printf("����");
     else
       printf("��ѧ����1��������2:\n");
       scanf("%d",&b);
      if(b>1)
       printf("ԭ��");
      else
       printf("����");
  getch();
}
