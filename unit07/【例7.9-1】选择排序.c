int main(void)
{
	int i,j,k,score[10],t;
	printf("����ʮ������\n");
	for(i=0;i<10;i++)
		scanf("%d",&score[i]);//���� 
	for(i=0;i<10;i++)
	{
		k=i;//k�����i��ʱ��Сֵ���±� 
		for(j=i+1;j<10;j++)//Ѱ����Сֵ 
		{
			if(score[k]<score[j])
				k=j;
		}
		t=score[k];//���� 
		score[k]=score[i];
		score[i]=t;
		
	}
	for(i=0;i<10;i++) 
		printf("%d  ",score[i]);
	return 0;
}