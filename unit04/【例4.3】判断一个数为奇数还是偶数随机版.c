#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,k;
	srand((unsigned)time(NULL));
	a=rand()%1234+0;
	if(a%2==0)printf("%dż��\n",a);
	else printf("%d����\n",a);
	return 0;
}