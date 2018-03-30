#include<stdio.h>
int main()
{
	int num,a,b,c,i;
	scanf("%d",&num);
	a=num/100;
	b=num%100/10;
	c=num%10;
	i=c*100+b*10+a;
	printf("%d",i);
	return 0;
}
