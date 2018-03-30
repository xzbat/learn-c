#include<stdio.h>
int main()
{
	int x;
	double a=10000000.00,b,c;
	for( ; ; )
	{
		printf("b=");
		scanf("%lf",&b);
		if(b>0.0)
		{
		c=a;
		x=0;
		for( ; ; )
			{
			c=c*(1+b);
			++x; 
			if(c>=2*a) break;
			}
		printf("%d\n",x);
		}
		else
		{
			printf("wrong");
		}
		return 0;
	}
 } 
