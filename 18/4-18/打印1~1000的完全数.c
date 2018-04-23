#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for(i=1;i<=1000;i++){
    	k=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                k+=j;
            }
        }
        if(i==k){
        printf("%d\n",i);
    
    }
    }
    return 0;
}
