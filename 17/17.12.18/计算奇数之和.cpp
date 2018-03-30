#include<stdio.h>
int main()
{
	int num, a;
	scanf("%d",&num);
	for(a=0;num>=1;num-2){
		if(num%2==0){
		num--;
		a+=num;
		}
		else{
			a+=num;
		
		}
	}
	printf("%d",a);
	return 0;
}
