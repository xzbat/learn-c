#include<stdio.h>
int main()
{
	long a, b, i, j;
	scanf("%ld%ld",&a,&b);
	long  s1=0, s2=0;
	for(i=1;i<a;i++)
	{
		s1=s1+i;
	}
	for(j=1;j<b;j++)
	{
		s2=s2+j;
	}
	printf("%ld\n%d\n",s1,s2);
	return 0;
}

