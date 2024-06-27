#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,cz=0,co=0;

    printf("enter the number:");
    scanf("%d",&n);
    int q=n;
    while(q!=0)
    { if(q%2==0)
    cz++;
        else co++;
        q=q/2;
    }
    printf("Total zero bit is:%d",cz);
    printf("Total one bit is:%d",co);
    return 0;
}
