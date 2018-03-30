#include<stdio.h>  
int main()  
{  
    int i;  
    int n,sum;  
    while(scanf("%d",&n)!=EOF)  
    {  
        sum=0;  
        for(i=1;i<=n;i++)  
            if(i%2==1)  
                sum+=i;  
        printf("%d\n",sum);  
    }  
    return 0;  
}  

