
#include<stdio.h>
int main()
{
	int n, t ;
	scanf("%d",&n);
	do{
		t=n%10;
		printf("%d ",t);
		n/=10;
	}while(n>0);
	return 0;
}

