#include<stdio.h>
int Matrix(int a,int b)
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	Matrix(4,5);
	return 0;	
}
