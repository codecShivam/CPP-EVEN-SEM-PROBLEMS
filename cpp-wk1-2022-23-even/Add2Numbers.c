#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<n; i++){
        if(n%i==0){
            sum += i; 
        }
    }
    if(sum==n){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
