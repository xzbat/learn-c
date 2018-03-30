#include<stdio.h> 
int main()
{
	int n,t;
	scanf("%d",&n);
	for(;n>0;n/=10)
	{
		t=n%10;
		printf("%d",t);
	}
	return 0;
}
