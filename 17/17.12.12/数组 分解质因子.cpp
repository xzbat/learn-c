#include<stdio.h>
int isPrimer(int n) {
  if (n == 2) return 1;
  if (n % 2 == 0 || n <= 1) return 0;
  int c;
  for (c = 3; c * c <= n; c += 2) {
    if (n % c == 0) return 0;
  }
  return 1;
}
int main()
{
    int n;
    scanf("%d",&n);     
        int i;
        for(i=2;i<=n;i++)
        {
            if(n%i==0&&isPrimer(i)==1)
            printf("%d ",i);
      	
        }
    return 0;
}
