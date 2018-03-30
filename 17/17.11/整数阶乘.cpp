 #include<stdio.h>
 int main()
 {
 	long long x,i,s=1;
 	scanf("%lld",&x);
 	for(i=2;i<=x;i++)
 	{
 		s=s*i;	
	}
	printf("%lld",s);
	return 0;
 }
