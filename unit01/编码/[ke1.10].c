/*���������������ֵ*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a,b,c;
  printf("����������������a,b,c:");
  scanf("%d,%d,%d",&a,&b,&c);
  if(a>b)
    a=a;
  else
    a=c;
  if(a>c)
    printf("%d",a);
  else
    printf("%d",c);
  getch();
}
