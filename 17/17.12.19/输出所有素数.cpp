#include<stdio.h>
int main()
{
	int num, i, isPrime, x;
	scanf("%d",&x);
	for(num=2;num<x;num++)
	{
			isPrime=1;
		for(i=2;i<num;i++){
			if(num%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d ",num);
		}
	}
	
	return 0;
}
