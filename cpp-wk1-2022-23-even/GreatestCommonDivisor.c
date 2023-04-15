#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,n,j;
    long a1,a2;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%ld",&a1);
        scanf("%ld",&a2);
        if(a1<a2){
            n=a1;
        }
        else{
            n=a2;
        }
        for(j=n; j>=1; j--){
            if(a1%j==0 && a2%j==0){
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}