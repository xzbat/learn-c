#include<stdio.h>
int main()
{
	int j=0;
	int a,b,i;
	scanf("%d %d",&a, &b);
	for(i=a;i<=b;i++)
	{
		if(i%3==0&&i%5==0)
		{
			j++;
			
		}
	}
		printf("%d",j);
	return 0;
}
