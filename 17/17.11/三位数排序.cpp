#include<stdio.h>
int main()
{
	int a, b, c, t;
	scanf("%d %d %d",&a, &b, &c);
	if(a>=b)
	{
		t=b;
		b=a;
	}
	else
	{
		t=a;	
	}
	if(t<=c)
	{
		if(b<=c)
		{
			printf("%d %d %d",t, b, c);
		}
		else
		{
			printf("%d %d %d",t, c, b);
		}
	}
	else
	{
		printf("%d %d %d",c, t, b);
	}
	
	return 0;
}
