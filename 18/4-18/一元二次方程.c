#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double a,b,c,x1,x2,delt;
    scanf("%lf %lf %lf",&a,&b,&c);
    delt=b*b-4*a*c;
    if(delt>=0){
        x1=(-b-sqrt(delt))/(2*a);
        x2=(-b+sqrt(delt))/(2*a);
        if(x1>=x2){
              printf("%.2lf %.2lf\n",x1,x2);
        }
        else{
              printf("%.2lf %.2lf\n",x2,x1);
        }
      
    }
    return 0;
}