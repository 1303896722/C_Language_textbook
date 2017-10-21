#include <stdio.h>
int main(void)
{
	int b[3][5]={{31,32,33,34,35},{21,22,23,24,25},{11,12,13,14,15}};
	printf("二维数组名/0行分数组的地址：b=%X，    &b[0]=%X\n",b,&b[1]);
	printf("           1行分数组的地址：b+1=%X,   &b[1]=%X\n",b+1,&b[1]);
	printf("           2行分数组的地址：b+2=%X,   &b[2]=%X\n",b+2,&b[2]);
	printf("           3行分数组的地址：b+3=%X,   &b[3]=%X\n",b+3,&b[3]);
	printf("           i行分数组的地址：二维数组名+i, &二维数组名[i]\n\n"); 
	
	printf("0行分数组名/0行0列的地址：*b  =%X, b[0]  =%X, &b[0][0]=%X\n",*b,b[0],&b[0][0]);
	printf("            0行1列的地址：*b+1=%X, b[0]+1=%X, &b[0][1]=%X\n",*b+1,b[0]+1,&b[0][1]);
	printf("            0行5列的地址：*b+5=%X, b[0]+5=%X, &b[0][5]=%X\n",*b+5,b[0]+5,&b[0][5]);
	printf("            0行j列的地址：*b+j         b[0]+j         &b[0][j]\n\n");
	
	printf("1行分数组名/1行0列的地址：*(b+1)  =%X, b[1]  =%X, &b[1][0]=%X\n",*(b+1),b[1],&b[1][0]);
	printf("            1行1列的地址：*(b+1)+1=%X, b[1]+1=%X, &b[1][1]=%X\n",*(b+1)+1,b[1]+1,&b[1][1]);
	printf("            1行5列的地址：*(b+1)+5=%X, b[1]+5=%X, &b[1][5]=%X\n",*(b+1)+5,b[1]+5,&b[1][5]);
	printf("            1行j列的地址：*(b+1)+j         b[1]+j         &b[1][j]\n\n");

	printf("i行分数组名/i行0列的地址：*(b+i)           b[i]           &b[i][0]=%X\n");
	printf("            i行1列的地址：*(b+i)+1         b[i]+1         &b[i][1]=%X\n");
	printf("            i行5列的地址：*(b+i)+5         b[i]+5         &b[i][5]=%X\n");
	printf("            i行j列的地址：*(b+i)+j         b[0]+j         &b[0][j]\n\n");
	
	printf("结论1：i行j列元素=b[i][j]  / *(b[i]+j)        /*(*(b+i)+j)\n");
	printf("结论2：i行j列地址=&b[i][j] /&*(b[i]+j)=b[i]+j /&*(*(b+i)+j)=*(b+i)+j\n");
	printf("结论3：i行分数组地址=&b[i] /&*(b+i)=b+i\n");
	printf("结论4：i行分组名=&b[i][0] /b[i]   /*(b+i)\n");
	printf("结论5：i行分组名=i行0列地址!=i行分数组地址\n");
	printf("结论5：二维数组名=0行数字地址(b)\n");
	printf("       0行地址名=0行0列地址(b[o])\n");
	printf("       二维数组名！=0行数组名\n") ;

	return 0;
}