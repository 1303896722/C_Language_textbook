#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a[10];
	int i,max,min;
	printf("������10������:\n");
	fflush(stdout);	//�����׼�������stdout�Ļ����� ,ǿ�ƽ�����뵽��Ļ�� 
	for(i=0;i<10;i++)  
		scanf("%d",&a[i]);
	printf("����Ԫ���У�\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	max=min=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("���ֵ=%d,��Сֵ=%d\n",max,min);
	return 0;
}