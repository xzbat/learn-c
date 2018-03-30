#include<stdio.h>
int main()
{
	double s, r;
	while(scanf("%lf",&r)!=EOF)
	{
		s=4/3*pi*r*r*r;
		printf("%.3f", s)
	}
	return 0;
}
