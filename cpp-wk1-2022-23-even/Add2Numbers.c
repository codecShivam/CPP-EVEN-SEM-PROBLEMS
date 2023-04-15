#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i;
    long A,B;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%ld%ld",&A,&B);
        printf("%ld\n",A+B);
    }
    return 0;
}

