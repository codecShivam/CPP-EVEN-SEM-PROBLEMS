#include <stdio.h>
int main() {
long fact=1,i,sum=0,t,n,x,j;
      scanf("%ld",&t);

    for(i=1;i<=t;i++)
    {
     scanf("%ld",&n);
     for(j=1;j<=n;j++)
      {
        fact=fact*j;
      }
      while(fact>0){
        x = fact % 10;
        sum += x;
        fact = fact/10;
       }
        printf("%ld\n",sum);
  
        sum=0;
        fact=1;
    
     }
    return 0;
}
