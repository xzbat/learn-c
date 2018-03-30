#include<stdio.h>
int main()
{
	int num, i; 
	int sum=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	if(i%2==1){
		sum+=i; 
	}
	}
	printf("%d",sum);
	return 0;
}
