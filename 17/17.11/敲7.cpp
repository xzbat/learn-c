#include<stdio.h>
int main()
{
	int N,n;
	scanf("%d",&N);
	for(n=1;n<=N;n++)
	{
		if(n%7==0||n%10==7||n%100==7||n%1000==7)
		{
		printf("%d\n",n);
		}
	}
	return 0;
}
