#include <stdio.h>
int main()
{
	int i, j, result;
	for(i=9;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			result=i*j;
			printf("%d*%d=%d\t",i,j,result);
		}
		printf("\n");
	}
	return 0;
}
