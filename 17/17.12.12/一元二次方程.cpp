#include<stdio.h>
#include<math.h>
void f(double a, double b, double c)
{
	double x1, x2, t;
	if(b*b-4*a*c>=0){
		x1=(-b+sqrt(b*b-4*a*c))/2*a;
		x2=(-b-sqrt(b*b-4*a*c))/2*a;
	}
	if(x1<x2){
		t=x1;
		x1=x2;
		x2=t;
	}
	printf("%.2lf %.2lf\n",x1, x2);
	return;
}
int main()
{ 
double a, b, c;
scanf("%lf %lf %lf",&a, &b, &c);
f(a,b, c);
return 0;
} 
