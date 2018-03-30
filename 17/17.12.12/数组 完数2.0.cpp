#include <stdio.h>  
  
int FacSum(int n)  
{  
    int sum = 0, i;  
    for(i = 2; i <= n / 2; i++)  
    {  
        if(n % i == 0)  
        {  
            sum += i;   
        }  
    }  
    return sum + 1;  
}   
  
int main()  
{  
//  freopen("input8.txt", "r", stdin);   
    int n, i, sum;  
    scanf("%d", &n);  
    if(n == 1)  
    {  
        printf("no\n");  
        return 0;  
    }  
    sum = FacSum(n);  
    if(sum == n)  
        printf("yes\n");  
    else  
        printf("no\n");  
    return 0;  
}  

