#include<stdio.h>
void sum(int begain, int end)
{
	int i;
	int sum =0;
	for(i=begain;i<=end;i++){
		sum +=i;
	}
	printf("%d\n",sum);
}

int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
}
