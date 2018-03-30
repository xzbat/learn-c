#include<stdio.h>
int main()
{
	int num, i, isPrime;
	scanf("%d",&num);
	isPrime=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			isPrime=0;
			break;
		}
	}
	printf("%d",isPrime);
	return 0;
}
