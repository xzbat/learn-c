#include<stdio.h>
int main()
{
	int n,t,b;
	int a=0;
	scanf("%d",&n);
	do{
	
		t=n%10;
		a=a*10+t;
		n/=10;	
	}while(n>0);
	
	n=a;
	do{
		b=n%10;
		printf("%d",b);
		if(n>=10){
			printf(" ");
		}
		n/=10;
	}while(n>0);
	printf("\n");
	return 0;
}

