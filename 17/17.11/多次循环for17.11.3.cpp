#include<stdio.h>
int main()
{
	int i, j, k;
	for(i=1;i<80;i++)
	{
		for(j=0;j<81-i;j++)
		{
			printf(" ");
			
		}
		for(k=0;k<2*i-1;k++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
