#include <stdio.h>
#include <stdlib.h>

int main()
{ int n ,fact=1 ;
    printf("enter a number:");
    scanf("%d",&n);
  int num=n ;
    while(n!=0)
    {
        fact=fact*n ;
        n-- ;
    }
        printf("the factorial of %d is %d",num,fact);
    return 0;
}
