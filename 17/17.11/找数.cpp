#include<stdio.h>
int main()
{
	int num, a, b, c, s, i;
	for(num=100;num<1000;num++)
	{
		a=num/100;
		b=num%100/10;
		c=num%10; 
		if(a!=b!=c&&b>a+c)
		{
			s=num;
			for(i=2;i<=s-1;i++)
			{
				if(s%i==0)
				break;
			}
			if(i>=s)
			printf("%d\n",s);
		}
		
	}	 
	 
	return 0;
 } 
