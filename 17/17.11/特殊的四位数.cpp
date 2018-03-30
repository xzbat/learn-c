#include<stdio.h>
int main()
{
	int num, a,b;
	for(num=1000;num<=9999;num++)
	{
		a=num/100;
		b=num%100;
		if(num==(a+b)*(a+b))
		{
			printf("%d  ",num);
		}
	}
	return 0;
}
