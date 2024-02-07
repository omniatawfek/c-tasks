#include <stdio.h>
#include <stdlib.h>

int main()
{   int n ,i;
    printf("enter the height you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
