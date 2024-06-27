#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,p,r=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the Power:");
    scanf("%d",&p);
    while(p!=0)
    {    p--;
       r*=n ;

    }
    printf("Answer=%d",r);
    return 0;
}
