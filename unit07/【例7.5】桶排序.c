#include <stdio.h>
int main(void)
{
	int i,j=0,k;
	int base_array[101]={0}; //100����Ҫ����101���ռ���Ϊ��������ͬʱ���㴦�� 
	int sort_array[15];
	printf("������15��ͬѧ�ĳɼ���"); 
	for(i=0;i<10;i++)	   
		scanf("%d",&sort_array[i]);	//�������� 
	for(i=0;i<10;i++)
		base_array[sort_array[i]]++;//���ɼ����ִ���ͳ�Ƶ��������� 
	 
	 /*���������뵽 sort_array������*/
	for(i=0;i<101;i++)
	{
		if(base_array[i]!=0)
		{
			for(k=0;k<base_array[i];k++)//iΪ��ֵ��С��jΪsort_array�±� 
			{							//kΪi���ֵĴ��� 
				sort_array[j]=i;
				j++;
			}
		}
	} 
	for(i=0;i<10;i++)
		printf("%5d",sort_array[i]); //������ 
}