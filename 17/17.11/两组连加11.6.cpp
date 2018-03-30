#include<stdio.h>
int main()
{
	int a, b, i, j;
	scanf("%d%d",&a,&b);
	int  s1=a, s2=b;
	for(i=0;i<a;i++)
	{
		s1=s1+i;
	}
	for(j=0;j<b;j++)
	{
		s2=s2+j;
	}
	printf("%d\n%d\n",s1,s2);
	return 0;
}

