#include<stdio.h>
int main()
{
	int n, k, i;
	for(n=101;n<=200;n++)
	{
		for(i=2;i<=n-1;i++)
		{ 
			if(n%i==0)
			break;
		}
			if(i>=n)
			{
				k++;
				printf("%d\t%d\r",k,n);
				
			}		
	
	
	
		
	}	 
	 
	return 0;
 } 
