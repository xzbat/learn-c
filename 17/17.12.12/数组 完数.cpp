#include<stdio.h> 
int main()
{
    int n;
	int m=0;
    int a[m];
    
    scanf("%d",&n);
  
        int i;
        for(i=1;i<n;i++)
        {
            if(n%i==0){
			
            a[m]=i;m++;}
            
        }
        int sum=0,j;
        for(j=0;j<=m;j++)
        {
        	sum+=a[j];
		}
		if(sum==n||n==1||n==0)printf("yes");
        else printf("no");
        
    
    return 0;
}
