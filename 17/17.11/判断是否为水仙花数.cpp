#include<stdio.h>
int main()
{
	int num, hd, td, sd;
	scanf("%d",&num);
	hd=num/100;
	td=num%100/10;
	sd=num%10;
	if(num==hd*hd*hd+td*td*td+sd*sd*sd)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
