#include<stdio.h>
int main()
{
	int i,s1,s2;
	for(s1=0,s2=0,i=1;i<=100;i++)
	{
		s1=s1+i;
		if(i%2==0)
			continue;
		s2=s2+i;
	}
		printf("1+2+4+бнбн+100=%6d\n",s1);
		printf("1+3+3+бнбн+99=%6d\n",s2);
	return 0;
}
