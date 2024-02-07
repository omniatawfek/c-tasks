#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("enter the enteger you want a multiplication table of:");
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        printf("%d*%d=%d\t",n,i,n*i);
    }
    return 0;
}
