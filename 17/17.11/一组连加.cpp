#include <stdio.h>
int main()
{
 int a,i, s=0;
 	scanf ("%d",&a);
   
    for(i = 1; i <= a; i ++)//循环遍历。
     { 
	  s+=i;//累加。
     } 
    printf("%d\n", s);//输出结果。
     
    return 0;
} 
